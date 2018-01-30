var $ = jQuery.noConflict();

$(document).ready(function() {
  
   var lang = $('html').attr('lang'); 
   var show = 'Afficher ';
   var hide = 'Masquer ';   
   if(lang == "en")
   {
     show = "Show ";
     hide = "Hide ";
   }

   $('.bootstrap-collapse-processed').each(function(){
     if($(this).hasClass('collapsed')) $(this).attr('title', show + $.trim($(this).text()));
     else $(this).attr('title', hide + $.trim($(this).text()));
   });
   
   $('.bootstrap-collapse-processed').click(function(){
     if($(this).hasClass('collapsed'))
      $(this).attr('title', hide + $.trim($(this).text()));
     else
      $(this).attr('title', show + $.trim($(this).text()));

   });  
  
});

