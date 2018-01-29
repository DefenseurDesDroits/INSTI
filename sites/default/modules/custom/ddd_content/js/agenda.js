(function($) {
	//$('document').ready(function() {
	Drupal.behaviors.soclelab_ddd = {
			attach: function (context, settings) {
				event_carousel();	
	//});
	}
};
	
/* 
 * Function: post data events filter
 * 
 * */
function event_post_week_filter(date) {
	$('#chargementEvent').html(".");
	$("#chargementEvent").addClass("load-img");
	
	// Desctiver les bouttons de scroll une fois le chargement est en cours
	$("#left-scroll").addClass("desac-scroll");
	$("#right-scroll").addClass("desac-scroll");
	
	current_date = 'encoyer';
	var reqFilter = $.ajax({
		type: "POST",
		url: '/getagenda',
		data: {
            'date': date,
        },
		success: function(data) {
			    $('.view-display-id-default').html('');
				$('.view-display-id-default').html(data.html);
				$('#chargementEvent').empty();	
				$("#chargementEvent").removeClass("load-img");
				
				// Activer les bouttons de scroll une fois le chargement est terminer
				$("#left-scroll").removeClass("desac-scroll");
				$("#right-scroll").removeClass("desac-scroll");
    	}
 	});	
}

/* 
 * Function: create bloc navigation weeks
 * 
 * */
function event_carousel() {
	var tracker = 1;
	var maxdivs = 52;
	
	var cuurentDate = new Date();
	var currentWeek = getWeekNumber(cuurentDate);
	
    $(".divs div").each(function(e) {
        var weeksVal = $(this).text();
        if (/*e != 0 && */weeksVal != currentWeek)
            $(this).hide();
    });  
    
    // Put current week in tracker
    tracker = currentWeek;
    
    // Display furst week
    var divClassInit = ".cls" + tracker;
    var dateFilterInit = getWeekRange(tracker);
    $(divClassInit).html(dateFilterInit[1]);
    // Send date filter
  	event_post_week_filter(dateFilterInit[0]);
    
    $("#next").click(function() {
    	var divclass = ".cls" + tracker;
    	tracker = tracker + 1;
    	if(tracker > maxdivs)
    	  tracker = 1;
    	
    	divclass = ".cls" + tracker;
    	  
    	var dateFilter = getWeekRange(tracker);
	  	$(divclass).html(dateFilter[1]);
	  	// Send date filter
	  	event_post_week_filter(dateFilter[0]);
    	
    	
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
    	tracker = tracker - 1;
    	if(tracker < 1)
    	    tracker = maxdivs;
    	
    	divclass = ".cls" + tracker;
    	
    	var dateFilter = getWeekRange(tracker);	  	
	  	$(divclass).html(dateFilter[1]);       
        // Send date filter
	  	event_post_week_filter(dateFilter[0]);
    	
    	
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
    // Copy date so don't modify original
    d = new Date(+d);
    d.setHours(0,0,0);
    // Set to nearest Thursday: current date + 4 - current day number
    // Make Sunday's day number 7
    d.setDate(d.getDate() + 4 - (d.getDay()||7));
    // Get first day of year
    var yearStart = new Date(d.getFullYear(),0,1);
    // Calculate full weeks to nearest Thursday
    var weekNo = Math.ceil(( ( (d - yearStart) / 86400000) + 1)/7)
    // Return array of year and week number
    //return [d.getFullYear(), weekNo];
    return weekNo;
}

/* 
 * Function: return dates display and filter
 * 
 * */
function getWeekRange(tracker) {
  var today = new Date();
  var year = today.getFullYear();
  //var year = 2014; // TODO: Pour tester l anne courante, a commenter
  var d = new Date(year, 0, 1);
  var week = tracker;
  var dayNum = d.getDay();
  var diff = --week * 7;

  if (!dayNum || dayNum > 4) {
	diff += 7;
  }

  d.setDate(d.getDate() - d.getDay() + ++diff); 
  
  //var dateFilter = dateInitFormat + '--' + dateInitFormatLast;
  
  var dateFilter = getDateFormat(d);//console.log(dateFilter[0]);console.log(dateFilter[1]);
  
  return dateFilter;
}

/* 
 * Function: return dates display and filter format
 * 
 * */
function getDateFormat(d) {
  // Date to filter
  var yyyy = d.getFullYear().toString();                                    
  var mm = (d.getMonth()+1).toString(); // getMonth() is zero-based         
  var dd  = d.getDate().toString();
  var dateInitFormat = yyyy + '-' + (mm[1]?mm:"0"+mm[0]) + '-' + (dd[1]?dd:"0"+dd[0]);  
	  
  // Last day of week
  var lastday = new Date(d.setDate(d.getDate() - d.getDay()+6));
  var yyyyLast = d.getFullYear().toString();                                    
  var mmLast = (d.getMonth()+1).toString(); // getMonth() is zero-based         
  var ddLast  = d.getDate().toString();
  var dateInitFormatLast = yyyyLast + '-' + (mmLast[1]?mmLast:"0"+mmLast[0]) + '-' + (ddLast[1]?ddLast:"0"+ddLast[0]);
	  
  var dateFilter = dateInitFormat + '--' + dateInitFormatLast;
	
  // Date to display	  
  var dayDisFurst = dd[1]?dd:"0"+dd[0];
  var dayDisLast  = ddLast[1]?ddLast:"0"+ddLast[0];
	 
  var monthDsipl = getMonthText(d);  
  var dateToDisplay = 'Semaine du <br><h3>' + dayDisFurst + '</h3> au <h3>' + dayDisLast + '</h3><br> ' + monthDsipl + '<br> ' + yyyyLast;
	  
  //return dateFilter;
  return [dateFilter, dateToDisplay];
}

/* 
 * Function: get month in text format
 * 
 * */
function getMonthText(date) {
  var month = new Array();
  month[0] = "Janvier";
  month[1] = "Février";
  month[2] = "Mars";
  month[3] = "Avril";
  month[4] = "Mai";
  month[5] = "Juin";
  month[6] = "Juillet";
  month[7] = "Août";
  month[8] = "Septembre";
  month[9] = "Octobre";
  month[10] = "Novembre";
  month[11] = "Décembre";
  var n = month[date.getMonth()];
	
  return n; 
}

})(jQuery);