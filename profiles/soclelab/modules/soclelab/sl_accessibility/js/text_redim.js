var $ = jQuery.noConflict();

$(document).ready(function() {
  
  $('.link-phone').prepend('<span class="element-invisible">Contact par téléphone : </span>');
  $('#zoom-magnify').attr('role','button');
  $('#zoom-minify').attr('role','button');
  
  $("#zoom-magnify").click(function(){
    $("#zoom-minify").attr("style","display:block");
    $("#zoom-magnify").attr("style","display:none");
    localStorage.setItem("doZoom", "1");
    $('body').attr("style","font-size: 1.5em;");
    $('body').addClass('big-font');
    return false;
  });
  
  $("#zoom-minify").click(function(){
    $("#zoom-magnify").attr("style","display:block");
    $("#zoom-minify").attr("style","display:none");
    localStorage.setItem("doZoom", "0");
    $('body').attr("style","font-size: 1em;");
    $('body').removeClass('big-font');
    return false;
  });
  
  if (localStorage.getItem("doZoom") == 1) {
    $("#zoom-magnify").click();
  }else{
    $("#zoom-minify").click();
  }
});
