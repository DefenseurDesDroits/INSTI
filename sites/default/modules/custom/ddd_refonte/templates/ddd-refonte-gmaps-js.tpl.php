<script type="text/javascript">
  // Translatable strings.
  var phoneString = "<?php print t('Phone'); ?>";
  var permanenceString = "<?php print t('Permanence'); ?>";
  var contactDelegate = "<?php print t('Contact the delegate'); ?>";
  var resultsFor = "<?php print t(' Result(s) for '); ?>";
  var category = "<?php print t('Delegate'); ?>";
  var markerClustererPath = "<?php print $clusterer_img_path; ?>";
  var listingSortCriterion = "<?php print $sort_criterion; ?>";
  function pinSymbol(color) {
    return {
      path: 'M 0,0 C -2,-20 -10,-22 -10,-30 A 10,10 0 1,1 10,-30 C 10,-22 2,-20 0,0 z M -2,-30 a 2,2 0 1,1 4,0 2,2 0 1,1 -4,0',
      fillColor: color,
      fillOpacity: 1,
      strokeColor: '#FFF',
      strokeWeight: 2,
      scale: 1
    };
  }

  // Copied from delegate.js.
  function insert_html(value) {
    var basePicUrl = "<?php print $img_url; ?>";
    htmlfinal = 0;
    htmlfinal = "   <div class='row' id=" + value.zipcode + " name='deleg'>";
    htmlfinal += "      <div class='col-md-12'>";
    htmlfinal += "          <div class='top-delegue'>";
    htmlfinal += "              <p class='titre-delegue'>" + value.name + " - <span class='ville-delegue'>" + value.city + "</span></p>";
	if(value.nameComplement != ""){
	  htmlfinal += "              <p class='txt-delegue'>" + value.nameComplement + "</p>";
	}
    htmlfinal += "              <p class='txt-delegue'>" + value.address + " " + value.zipcode + " " + value.city + "</p>";
    if(value.addressComplement != ""){
	  htmlfinal += "              <p class='txt-delegue'>" + value.addressComplement + "</p>";
	}
	htmlfinal += "              <p class='txt-delegue'>" + phoneString + " : " + value.tel + " " + " - Fax : " + value.fax + "</p>";
    htmlfinal += "          </div>";
    htmlfinal += "      </div>";  
    for (var i = 0; i < value.del.length; i++) {
      htmlfinal += "      <div class='col-xs-12 col-sm-6 col-md-6'>"
      htmlfinal += "          <div class='delegue col-xs-12 col-sm-4 col-md-3'>"
      htmlfinal += "              <div class='img-delegue' style='background-image:url("+basePicUrl+'/'+value.del[i].photo +")'></div>"
      htmlfinal += "          </div>"
      htmlfinal += "          <div class='delegue col-xs-12 col-sm-8 col-md-9'>"
      htmlfinal += "              <div class='infos-delegue'>"
      htmlfinal += "                  <p class='nom-delegue'>" + value.del[i].firstname + " " + value.del[i].lastname + "</p>"
      for (var x = 0; x < value.del[i].duty.length; x++) {
        htmlfinal += "                  <p class='perm-delegue'>" + permanenceString + " : " + value.del[i].duty[x].day + " (" + value.del[i].duty[x].time + ")" + "</p>"
      }
      htmlfinal += "                  <p class='txt-delegue'>" + value.del[i].mobile + "</p>"
      htmlfinal += '                  <div class="lls contact-delegue"><a href="/contacter-un-delegue?title=' + value.name + '&city=' + value.city + '&name=' + value.del[i].firstname + ' ' + value.del[i].lastname +'&email=' + value.del[i].email + '">' + contactDelegate + '</a><span class="slash-blue"></span></div>';
      htmlfinal += "              </div>";
      htmlfinal += "          </div>";
      htmlfinal += "      </div>";
    }
    htmlfinal += "  </div>";
    return htmlfinal;
  } // Copied from delegate.js.
 
  // Build the infoWindow content.
  function buildInfoWindow(value) {
    var contentString = '';
    (function($) {
      contentString+=  '<div class="top-delegue">';
      contentString += '<p class="titre-delegue">' + value.name + ' - <span class="ville-delegue">' + value.city + '</span></p>';
	  if(value.nameComplement != ""){
         contentString += "              <p class='txt-delegue'>" + value.nameComplement + "</p>";
      }
      contentString += '<p class="txt-delegue">' + value.address + ' ' + value.zipcode + ' ' + value.city + '</p>';
      if(value.addressComplement != ""){
		contentString += "              <p class='txt-delegue'>" + value.addressComplement + "</p>";
	  }
	  contentString += '<p class="txt-delegue">' + phoneString + ' : ' + value.tel + ' - Fax: ' + value.fax + '</p>';
      
      // Close the "top-delegue" div.
      contentString += '</div>';

      // Loop over the delegates.
      $.each(value.del, function(index, delegate) {
        contentString += '<div class="infos-delegue">';
        contentString += '<p class="nom-delegue">' + delegate.firstname + ' ' + delegate.lastname + '</p>';

        // Add the "duties".
        if (delegate.duty) {
          contentString += '<p class="perm-delegue">' + permanenceString + ' : ';

          // Loop over the duties.
          $.each(delegate.duty, function(dutyIndex, duty) {
            contentString += duty.day + ' (' + duty.time + ')';
          });

          contentString += '</p>';
        }

        contentString += '<p class="txt-delegue">';

        // Check if there's a mobile phone.
        if (delegate.mobile.length > 0) {
          contentString += 'Mobile:' + delegate.mobile;
        }

        // Close the "txt-delegue" paragraph.
        contentString += '</p>';

        contentString += '<div class="lls contact-delegue"><a target="_blank" href="/contacter-un-delegue?title=' + value.name + '&city=' + value.city + '&name=' + delegate.firstname + ' ' + delegate.lastname +'&email=' + delegate.email + '">' + contactDelegate + '</a><span class="slash-blue"></span></div>';

        // Close "infos-delegue" <div>.
        contentString += '</div>';
      });

    })(jQuery);

    return contentString;
  }

  // This function is called when the map is initialized.
  function initMap() {
    (function($) {
      // Center the map to France on init.
      var $autocomplete = $('#gmaps-autocomplete');
      var $button = $('#gmaps-autocomplete-container button');
      var delegatesListing = $('#delegates');
      //var defaultPosition = {lat: 47.1945424, lng: 1};
	  var defaultPosition =	{lat: 25, lng: 45};
      // Initialize an array that will hold the markers.
      var markers = [];
      var jsonData = [];
      var infoWindow = new google.maps.InfoWindow();
      var bounds = new google.maps.LatLngBounds();
      //var defaultZoom = 6;
	  var defaultZoom = 3;
      var zipCode = '';
      var placeChanged = false;

      // Change the zoom for small screens.
      if ($(window).width() < 768) {
        defaultZoom = 4;
		defaultPosition = {lat: 47.1945424, lng: 1};
        if (window.innerHeight > window.innerWidth) {
          $('#map').removeClass('embed-responsive-21by9').addClass('embed-responsive-4by3');
        }
      }

      var map = new google.maps.Map(document.getElementById('map'), {
        zoom: defaultZoom,
        center: defaultPosition
      });

      // Listen to window resize to set the center.
      google.maps.event.addDomListener(window, 'resize', function() {
        map.setCenter(defaultPosition);
      });

      // Init "autocomplete" settings.
      var input = /** @type {!HTMLInputElement} */(
        document.getElementById('gmaps-autocomplete'));
      var autocompleteContainer = document.getElementById('gmaps-autocomplete-container');
      map.controls[google.maps.ControlPosition.TOP_LEFT].push(autocompleteContainer);

      var options = {
        componentRestrictions: {
          //country: 'fr'
		  country: ["fr", "gp", "mq", "gf", "re", "pm", "yt", "nc", "pf", "mf", "tf"]
        }
      };
      var autocomplete = new google.maps.places.Autocomplete(input, options);

      // Listen to the "place_changed" event.

      google.maps.event.addListener(autocomplete, 'place_changed', function() {
        var place = autocomplete.getPlace();
        if (!place.geometry) {
          return;
        }

        if (place.geometry.viewport) {

          // Try to determine the zip code.
          for (var i = 0; i < place.address_components.length; i++) {
            for (var j = 0; j < place.address_components[i].types.length; j++) {
              if (place.address_components[i].types[j] == "postal_code") {
                zipCode = place.address_components[i].long_name;
              }
            }
          }

          placeChanged = true;
          // Fit to new bounds.
          map.fitBounds(place.geometry.viewport);
          map.setCenter(place.geometry.location);
          $('i', $button).removeClass('glyphicon-search').addClass('glyphicon-remove');
        }
      });

      // Make sure the search icon is shown when typing an address.
      $autocomplete.keyup(function(e) {
        if (e.keyCode !== 13 && $('i', $button).hasClass('glyphicon-remove')) {
          $('i', $button).removeClass('glyphicon-remove').addClass('glyphicon-search');
        }
      });

      google.maps.event.addDomListener(input, 'keydown',function(e) {
        if (e.keyCode === 13 && $('.pac-item-selected').length === 0 && !e.triggered) {
          google.maps.event.trigger(this, 'keydown', {keyCode:40});
          google.maps.event.trigger(this, 'keydown', {keyCode:13, triggered:true});
        }
      });

      var button = document.getElementById('submit-gmap-search');
      // Handle click on the search button.
      google.maps.event.addDomListener(button, 'click', function(e) {
        // Re-init the map when removing an address.
        if ($('i', $button).hasClass('glyphicon-remove')) {
          $autocomplete.val('');
          $('i', $button).removeClass('glyphicon-remove').addClass('glyphicon-search');
          map.setCenter(defaultPosition);
          map.setZoom(defaultZoom);
        }
        else {
          if ($('.pac-item-selected').length === 0) {
            google.maps.event.trigger(input, 'keydown', {keyCode:40});
            google.maps.event.trigger(input, 'keydown', {keyCode:13, triggered:true});
          }
        }
      });

      google.maps.event.addListener(map, 'dragend', function() {
        placeChanged = true;
      });

      google.maps.event.addListener(map, 'zoom_changed', function() {
        placeChanged = true;
      });

        // This event will be triggered once map becomes idle.
      google.maps.event.addListener(map, 'idle', function() {
        if (!placeChanged) {
          return;
        }
        // Check to see if we can update the bottom listing with the delegates
        // within the bounds.
        var delegatesFound = 0;
        var newMarkers = [];
        var zipCodeEntered = zipCode.length > 0;
        var center = map.getCenter();
        for (var i = 0; i < markers.length; i++) {
          if (map.getBounds().contains(markers[i].getPosition())) {
            //if (!zipCodeEntered || (zipCodeEntered && markers[i].zipcode.match("^" + zipCode))) {
              markers[i].distance = google.maps.geometry.spherical.computeDistanceBetween(center, markers[i].getPosition());
              if (!markers[i].hasOwnProperty('listHtml')) {
                markers[i].listHtml = insert_html(jsonData[i]);
              }
              delegatesFound++;
              newMarkers.push(markers[i]);
            //}
          }
        }
        // Empty the zip code so that it's not matched accidentally next time.
        zipCode = '';
        // When no delegates are found, display an empty message.
        if (delegatesFound <= 0) {
          if ($('#no-delegates-message').length > 0) {
            delegatesListing.html($('#no-delegates-message').html());
          }
        }
        else {
          delegatesListing.empty();
          delegatesListing.prepend('<div class="txt-resultats">' + delegatesFound + resultsFor + category + '</div>');
          // Sort by zip code.
          if (newMarkers.length > 0) {
            newMarkers.sort(function(a, b) {
              return (a[listingSortCriterion] - b[listingSortCriterion])
            });
            for (var i = 0; i < newMarkers.length; i++) {
              delegatesListing.append(newMarkers[i].listHtml);
            }
          }
        }
      });

      $.getJSON("<?php print $json_url; ?>", function(data) {
        $.each(data, function(i, value) {
          // Fill the json data array to use for the listing.
          jsonData.push(value);

          // Create a marker.
          var position = new google.maps.LatLng(value.geo.latitude, value.geo.longitude);
          var marker = new google.maps.Marker({
            position: position,
            icon: pinSymbol('#0876b6'),
            zipcode: value.zipcode
          });
          markers.push(marker);

          // Extend the bounds.
          bounds.extend(position);

          // Open the info window on click.
          marker.addListener('click', function() {
            var infoWindowContent = buildInfoWindow(value);
            infoWindow.setContent(infoWindowContent);
            infoWindow.close();
            infoWindow.open(map, marker);
          });
        });
        autocomplete.bindTo('bounds', map);

        new MarkerClusterer(map, markers, {
          imagePath : markerClustererPath
        });
      });
    })(jQuery);
  }
</script>
