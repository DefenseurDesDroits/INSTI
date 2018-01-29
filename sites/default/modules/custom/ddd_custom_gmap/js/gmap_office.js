function startsWith(str, prefix) {
    return str.lastIndexOf(prefix, 0) === 0;
}

function findCodeDepartement(address) {

  if(!isNaN(address))
  {
    if(address.length == 5)
    {
      if(startsWith(address, '97') || startsWith(address, '98')) {
        window.location.assign('http://' + window.location.hostname + '/office/' + address.substring(0, 3));
      }
      else {
        window.location.assign('http://' + window.location.hostname + '/office/' + address.substring(0, 2));
      }
      return true;
    }
    else if(address.length == 3)
    {
      if(startsWith(address, '97') || startsWith(address, '98')) {
        window.location.assign('http://' + window.location.hostname + '/office/' + address);
      }
      else {
        window.location.assign('http://' + window.location.hostname + '/office/' + address.substring(0, 2));
      }
      return true;
    }
    else if(address.length == 2)
    {
      window.location.assign('http://' + window.location.hostname + '/office/' + address);
      return true;
    }

  }

	var geocoder = new google.maps.Geocoder();
	geocoder.geocode( {'address': address}, function(results, status) {
		if (status == google.maps.GeocoderStatus.OK) {
			var latlng = new google.maps.LatLng(
			  results[0].geometry.location.lat(),
			  results[0].geometry.location.lng()
			);

			geocoder.geocode({'latLng': latlng}, function(results, status) {
				if (status == google.maps.GeocoderStatus.OK) {
				  var postal_found = false;
					for(var index in results) {
						if(results[index].types[0] == 'postal_code') {
						  postal_found = true;
							window.location.assign('http://' + window.location.hostname + '/office/' + results[index].formatted_address.substr(0, 2));
						}
					}
					if(postal_found == false) {

  					 var code_pays = results[0].address_components[results[0].address_components.length - 1]['short_name'];
  					 //console.log(code_pays);
             switch(code_pays) {
               case "GP":
                  window.location.assign('http://' + window.location.hostname + '/office/971');
                  break;
               // Dirty fix to find Basse-terre (GP) in gmap
               case "KN":
                  window.location.assign('http://' + window.location.hostname + '/office/971');
                  break;
               case "MQ":
                  window.location.assign('http://' + window.location.hostname + '/office/972');
                  break;
               case "GF":
                  window.location.assign('http://' + window.location.hostname + '/office/973');
                  break;
               case "RE":
                  window.location.assign('http://' + window.location.hostname + '/office/974');
                  break;
               case "PM":
                  window.location.assign('http://' + window.location.hostname + '/office/975');
                  break;
               case "YT":
                  window.location.assign('http://' + window.location.hostname + '/office/976');
                  break;
               case "PF":
                  window.location.assign('http://' + window.location.hostname + '/office/987');
                  break;
               case "NC":
                  window.location.assign('http://' + window.location.hostname + '/office/988');
                  break;
             }
					}
				}
			});

		} else {
      //Redirection for no results
			window.location.assign('http://' + window.location.hostname + '/office/none');
		}
  });
}

/**
 * Find marker with coordonates egals latitude and longitude in map map
 */
function findMarker(latitude, longitude, map) {
	//search in all the markers of the map
	for( var i=0; i < map.map.markers.length; ++i ) {
		//toFixed: to round coordinate to 6 numbers after the dot
		if( (map.map.markers[i].position.lat()).toFixed(6) == latitude.toFixed(6) && (map.map.markers[i].position.lng()).toFixed(6) == longitude.toFixed(6) ) {
			return map.map.markers[i];
		}
	}
}

/**
 * Simulate click on marker with coordonates egals at latitude and longitude
 * and zoom
 */
function clickMarker(latitude, longitude) {
	var map = Drupal.gmap.getMap("auto1map");
	if(map) {
	  	var markerToClick = findMarker(latitude, longitude, map);
	  	if(markerToClick) {
		  google.maps.event.trigger(markerToClick, 'click');
		  map.map.setCenter(markerToClick.getPosition());
		  window.scrollTo(0,window.innerHeight/2);
	  	}
	}
}

function validateForm(form) {
	var error = [];
	var size = form.length;
	for(var index = 0; index < size; ++index) {
		if(form[index].name != 'hidden' ) {
			if(form[index].type != 'radio' && form[index].value == '') {
				error.push(form[index].name);
			}
		}
	}
	if(jQuery(':checked').length == 0) {
		error.push('meeting');
	}
	return error;
}

jQuery(document).ready(function() {

	jQuery("#search_input_gmap").submit(function(event) {
		var data = jQuery("#search_input_gmap input[type=text]").val();
		findCodeDepartement(data);
		event.preventDefault();
	});


    /**************************************************************
     * Initialisation de la gmap lorsqu'il n'y a pas de recherche *
     **************************************************************/
    var cheminUrl = window.location.pathname;
    var indexDebutUrlSansCodeLangue = cheminUrl.indexOf('/office');  // '/office' => configuré dans la vue Drupal

    // Si on est sur la page avec la carte
    if(indexDebutUrlSansCodeLangue <= 3) {
        var cheminUrlSansCodeLangue = cheminUrl.substr(indexDebutUrlSansCodeLangue);
        var cheminUrlApresNomPage = cheminUrlSansCodeLangue.split('/');
        // S'il n'y a pas de recherche précise (pas d'URL allongée)
        if(cheminUrlApresNomPage.length < 3 || cheminUrlApresNomPage[2] == '') {
            // On modifie la carte en attendant 1000ms, le temps que la carte se charge
            setTimeout(function() {
                Drupal.gmap.getMap("gmap-auto1map-gmap0").map.setCenter(new google.maps.LatLng(47.902908, 1.909068));
                Drupal.gmap.getMap("gmap-auto1map-gmap0").map.setZoom(7);
            }, 1000);

        }
    }

});
