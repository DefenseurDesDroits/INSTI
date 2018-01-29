var $ = jQuery.noConflict();
var i = 0;				

$().ready(function() {
  big_photo_lightbox = $('#image-large-galerie-lightbox').find('img')[0] ;
});

function ShowLightbox(id_to_show){
  display_lightbox();
  big_id_to_show = id_to_show.replace("img-galerie-", "img-galerie-full-");

  big_photo_lightbox.src = $('#'+big_id_to_show).find('img')[0].src;
  big_photo_lightbox.alt = $('#'+big_id_to_show).find('img')[0].alt;
  
  $(".image-name").html(big_photo_lightbox.alt);
  $('#'+big_id_to_show).addClass('image-active');
  $("#image-large-galerie-lightbox .img-copyright").html( $('#'+big_id_to_show).find('.image-copyright')[0].innerHTML );
}

function display_lightbox() {
	$("#popup-galerie").show();
}
function hide_galerie() {
	$("#popup-galerie").hide();
}