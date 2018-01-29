var $ = jQuery.noConflict();

jQuery(document).ready( function() {
	$('#form-select-theme').bind('change', function () {
    var url = $(this).val(); // get selected value
    if ($(this).attr("data-url-redirect")) { // require a URL
        window.location = $(this).attr("data-url-redirect") + "?" + $(this).val(); // redirect
    }
    return false;
  });
  
  $('#form-select-year').bind('change', function () {
    var url = $(this).val(); // get selected value
    if ($(this).attr("data-url-redirect")) { // require a URL
        window.location = $(this).attr("data-url-redirect") + "?" + $(this).val(); // redirect
    }
    return false;
  });
  
  $('#form-select-theme-ra').bind('change', function () {
    var url = $(this).val(); // get selected value
    if ($(this).attr("data-url-redirect")) { // require a URL
        window.location = $(this).attr("data-url-redirect") + "?" + $(this).val(); // redirect
    }
    return false;
  });
  
  $('#form-select-year-ra').bind('change', function () {
    var url = $(this).val(); // get selected value
    if ($(this).attr("data-url-redirect")) { // require a URL
        window.location = $(this).attr("data-url-redirect") + "?" + $(this).val(); // redirect
    }
    return false;
  });
});