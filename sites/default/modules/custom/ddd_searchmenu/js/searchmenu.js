var $ = jQuery.noConflict();

$(document).ready(function() {
  
  var lang = $('html').attr('lang');    
  if(lang == "fr" || lang == "fr-DC") $("#search-button").attr('title', 'Afficher la recherche');     
  
  $("#search-button").attr('role', 'button');     
      
  $("#search-button").click(function(event) {
     if(lang == "fr" || lang == "fr-DC"){
      if($("#sl-search-head-form").is(':visible'))
        $("#search-button").attr('title', 'Afficher la recherche');
      else
        $("#search-button").attr('title', 'Masquer la recherche');          
     }
     event.preventDefault();
     $("#sl-search-head-form").toggle(250);
  });
  
  $('#edit-search-keyword').on('focusout', function(){
    $("#sl-search-head-form").toggle(250);
  });
  
});

