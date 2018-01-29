(function($) {
	
	Drupal.behaviors.soclelab_ddd_d = {
			attach: function (context, settings) {
				
				// Mettre a jour la vue lorseque en clique sur une date
				$(".year").click(function () {
			        var item = $(this).attr("href");
			        var type = 'date';
			        decision_post_filter_value(item, type);
			        $(".year").removeClass("date-current");
			        $(this).addClass("date-current");
			        //$( "#control-displ" ).show();
			        return false;
			    });	
				
				$(".classement").click(function () {
			        var item = $(this).attr("href");
			        var type = 'theme';
			        decision_post_filter_value(item, type);
			        $(".classement").removeClass("date-current");
			        $(this).addClass("date-current");
			        //$( "#control-displ" ).show();
			        return false;
			    });	
				
				// Recuperer les valeurs du theme et date depuis la page actions
				var theme = sessionStorage.getItem('theme');
				var date = sessionStorage.getItem('date');
				
				if (theme != null) {
				  var item = sessionStorage.getItem('theme');	
				  var type = 'theme';
				  
				  // Cacher le bloc des dates dans le cas du filtre par theme
				  $( "#control-displ" ).hide();
				}
				else {
				  var item = sessionStorage.getItem('date');
				  var type = 'date';
				  // Cacher le bloc des classements dans le cas du filtre par date
				  $( "#control-displ-motcles" ).hide();
				}
				
				// Mettre a jour la vue avec les valeurs selectionees
				if (item != null) {
				  if (type == 'date') {
					$("#section-date").addClass("dec-selectionne");					  
				  }
				  else {
					var cssId = "#section" + item;
					$(cssId).addClass("dec-selectionne");					  
				  }
				  
				  decision_post_filter_value(item, type);
				}
				
				// Vider les sessions de type de donnees
				sessionStorage.removeItem("theme");
				sessionStorage.removeItem("date");
			}
	};
	
	/* 
	 * Function: post filter value
	 * 
	 * */
	function decision_post_filter_value(value, type) {
		$('#chargementEvent' + type).html(".");
		$("#chargementEvent" + type).addClass("load-img");
		current_date = 'encoyer';
		var reqFilter = $.ajax({
			type: "POST",
			url: '/getdecision',
			data: {
	            'value': value,
	            'type': type,
	        },
			success: function(data) {				    
					$('.view-display-id-default').html('');
			        if (data.html == null) {
			          var msg = 'Aucun résultat trouvé.';	
			          $('.view-display-id-default').html(msg);
			        }
			        else {
			          $('.view-display-id-default').html(data.html);
			        }				    
					
					$('#chargementEvent' + type).empty();
					$("#chargementEvent" + type).removeClass("load-img");
	    	}
	 	});	
	}
	
})(jQuery);