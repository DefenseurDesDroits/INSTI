(function ($) {
  $('#zoom-magnify').on('click', function(){
    $('body').css('font-size', '1.5em');
    $('#zoom-magnify').hide();
    $('#zoom-minify').show();
  });
  $('#zoom-minify').on('click', function(){
    $('body').css('font-size', '1em');
    $('#zoom-minify').hide();
    $('#zoom-magnify').show();
  });
})(jQuery);