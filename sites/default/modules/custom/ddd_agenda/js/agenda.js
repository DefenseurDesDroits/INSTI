(function($) {

	Drupal.behaviors.soclelab_ddd = {
		attach: function (context, settings) {
			$('#block-ddd-agenda-block-agenda .row').show();
			event_carousel();
		}
	};

	/* 
	 * Function: post data events filter
	 * 
	 * */
	function event_post_week_filter(date) {
//		$('#chargementEvent').html(".");
//		$("#chargementEvent").addClass("load-img");
		
		// Désactive les boutons de scroll pendant le chargement
		$("#prev").addClass("desac-scroll");
		$("#next").addClass("desac-scroll");
		
		current_date = 'encoyer';
		var reqFilter = $.ajax({
			type: "POST",
			url: '/getagenda',
			data: {
	            'date': date,
	        },
			success: function(data) {
			    $('.view-display-id-page').html('');
				$('.view-display-id-page').html(data.html);
//				$('#chargementEvent').empty();	
//				$("#chargementEvent").removeClass("load-img");
				
				// Active les boutons de scroll une fois le chargement terminé
				$("#prev").removeClass("desac-scroll");
				$("#next").removeClass("desac-scroll");
	    	}
	 	});	
	}

	/* 
	 * Function: create bloc navigation weeks
	 * 
	 * */
	function event_carousel() {
		
		// Récupération de la date courante
		var currentDate = new Date();
	
		// Récupération du dernier jour de l'année courante
		var lastDay = new Date(currentDate.getYear(), 11, 31);
		// Récupération de la derniere semaine de l'année.
		var maxdivs = getWeekNumber(lastDay);
		// Récupération de la semaine courante.
		var currentWeek = getWeekNumber(currentDate);
	
    // On affiche la bulle liée à  la semaine courante
	    $(".divs div").each(function(e) {
	    	if( $(this).attr('class') == 'cls' + currentWeek ) {
	    		$(this).show();
	    	}
	    	else {
	    		$(this).hide();
	    	}
	    });  
	
	    // Put current week in tracker
	    var tracker = currentWeek;
	    
	    // Récupère la classe css de la div de la bulle et récupère le contenu 
	    var divClassInit = ".cls" + tracker, dateFilterInit = getWeekDays(tracker);
	    
	    // Remplis le contenu de la bulle
	    $(divClassInit).html(dateFilterInit[1]);
	    
	    // On passe en paramètre le "filtre" 
	  	event_post_week_filter(dateFilterInit[0]);
	    
	    $("#next").click(function() {
	    	var divclass = ".cls" + tracker;
	    	// On incrémente la semaine
	    	tracker = tracker + 1;
	    	
	    	// Si on dépasse le nombre de semaine max de l'année on repart de la première
	    	if(tracker > maxdivs) {
	    	  tracker = 1;
	    	}
	
	      // On change le contenu de la bulle et du filtre
	    	divclass = ".cls" + tracker;
	    	var dateFilter = getWeekDays(tracker);
		  	$(divclass).html(dateFilter[1]);
		  	event_post_week_filter(dateFilter[0]);

          // Affichage de la div de bulle courante
	        if ($(".divs div:visible").next().length != 0) {
	            $(".divs div:visible").next().show().prev().hide();
	        }
	        else {
	            $(".divs div:visible").hide();
	            $(".divs div:first").show();
	        }
	        return false;
	    });
	
	
	    $("#prev").click(function() {
	      
	    	var divclass = ".cls" + tracker;
	    	// On décremente la semaine
	    	tracker = tracker - 1;
	    	
	    	// Si la semaine devient négative, on repart de la derniere
	    	if(tracker < 1)
	    	    tracker = maxdivs;
	    	
        // On change le contenu de la bulle et du filtre
	    	divclass = ".cls" + tracker; 
	    	var dateFilter = getWeekDays(tracker);
		  	$(divclass).html(dateFilter[1]);
		  	event_post_week_filter(dateFilter[0]);

          // Affichage de la div de la bulle courante
	        if ($(".divs div:visible").prev().length != 0)
	            $(".divs div:visible").prev().show().next().hide();
	        else {
	            $(".divs div:visible").hide();
	            $(".divs div:last").show();
	        }
	        return false;
	    });
	}

	/* 
	 * Function: get week number from date
	 * 
	 * */
	function getWeekNumber(d) {
		var determinedate = new Date(+d); // Copy of date
		var onejan = new Date(determinedate.getFullYear(),0,1); // 1 January
		var diff = (determinedate - onejan); // Diff between 1th January and date d
		return Math.ceil((( diff / 86400000) + onejan.getDay()+1)/7);
	}

	/* 
	 * Function: return dates display and filter
	 * 
	 * */
	function getWeekDays(tracker) {
		
		// On récupère la date courante
		var d = new Date();
		var currentNumberDay = d.getDay(), diff = (tracker - getWeekNumber(d)) * 7; // Calcul la différence entre la semaine courante et celle voulue
	
		// Premier jour de la semaine
		var monday = new Date();
		monday.setDate((d.getDate() - currentNumberDay + 1) + diff);
		
		// Dernier jour de la semaine
		var sunday = new Date();
		sunday.setDate(d.getDate() + (7 - currentNumberDay) + diff);
		
		// Récupère l'année, le jour et le mois du Lundi, le jour et le mois du Dimanche
		var year = d.getFullYear(), monthDisplM = getMonthText(monday), monthDisplS = getMonthText(sunday), dateMonday = monday.getDate(),
		dateSunday = sunday.getDate();
		
		// Formate l'affichage du jour sur 2 chiffres
		function formatDay(numberDay) {
			return (numberDay < 10) ? '0' + numberDay : numberDay;
		}
	
	  // Formate les différentes variables de Date
		var fDateMonday = formatDay(dateMonday), fDateSunday = formatDay(dateSunday), monthM = formatDay(monday.getMonth() + 1 ), 
		monthS = formatDay(sunday.getMonth() + 1 );
	
	  // Contenu html de la div ()
		var msg = 'Semaine du <span class="day">' + fDateMonday + '</span>';
		
		// Si le mois du Lundi est différent du mois du Dimanche
		if( monthS !== monthM ) {
			msg += ' ' + monthDisplM;
		}
		
		msg += ' au <span class="day">' + fDateSunday + '</span> ' + monthDisplS + ' ' + year;
		return [
	        year + '-' + monthM + '-' + fDateMonday + '--' + year + '-' + monthS + '-' + fDateSunday,
	        msg
	    ];
	}

	/* 
	 * Function: get month in text format
	 * 
	 * */
	function getMonthText(date) {
		return date.toLocaleDateString('fr-FR', { month: 'short' });
	}

})(jQuery);