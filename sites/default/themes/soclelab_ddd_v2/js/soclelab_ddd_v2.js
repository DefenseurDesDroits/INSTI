(function($) {

  Drupal.behaviors.ddd_sliders = {
    attach: function(context, settings) {
      $('#myNavbar').on('shown.bs.collapse', function(e) {
        $('.btn-droits').hide();
        $('header').addClass('header-open');
        if($('#div-search').css('display') == 'block' ){
          $('#responsiv-close').trigger('click');
        }        
      });
      $('#myNavbar').on('hide.bs.collapse', function(e) {
        $('.btn-droits').show();
        $('header').removeClass('header-open');
      });
      var slider1;
      var slider2;
      var checkSize = function(){
        if (($(window).width()) < 992) { // xs
          if($('.view-nodequeue-1').length > 0){
            if (typeof slider1 == 'undefined') {
              slider1 = $(".view-nodequeue-1.view-display-id-block .view-content").bxSlider({
                minSlides: 1,
                maxSlides: 1,            
                prevText: '<i class="fa fa-chevron-left"></i>',
                nextText: '<i class="fa fa-chevron-right"></i>',
              });
            } else {
              slider1.reloadSlider();
            }
          }
          
          if($('.view-nodequeue-2').length > 0){
            if (typeof slider2 == 'undefined') {
              slider2 = $(".view-nodequeue-2.view-display-id-block .view-content").bxSlider({
                minSlides: 1,
                maxSlides: 1,            
                prevText: '<i class="fa fa-chevron-left"></i>',
                nextText: '<i class="fa fa-chevron-right"></i>',
              });
            } else {
              slider2.reloadSlider();
            }
          }

          if (typeof slider3 == 'undefined') {
            slider3 = $("#bs-example-navbar-collapse-6 .items").bxSlider({
              minSlides: 1,
              maxSlides: 1,            
              prevText: '<i class="fa fa-chevron-left"></i>',
              nextText: '<i class="fa fa-chevron-right"></i>',
              controls: false,
            });
          } else {
            slider3.reloadSlider();
          }

          $('#bs-example-navbar-collapse-6').on('shown.bs.collapse', function () {
            slider3.reloadSlider();
          })

        } else {
          if (typeof slider1 != 'undefined') {
            slider1.destroySlider();
            $(".view-nodequeue-1.view-display-id-block .view-content .views-row").removeAttr('style');
          }
          
          if (typeof slider2 != 'undefined') {
            slider2.destroySlider();
            $(".view-nodequeue-2.view-display-id-block .view-content .views-row").removeAttr('style');
          }

          if (typeof slider3 != 'undefined') {
            slider3.destroySlider();
            $("#bs-example-navbar-collapse-6 .items .item").removeAttr('style');
          }
        }
      }
      checkSize();
      $(window).resize(checkSize);
      if (($(window).width()) < 992) {
        $('.sub-menu').addClass('collapse');
        $( ".expanded a" ).each(function(index) {
          $(this).on('click', function(e){
            var current = $(this);
            $( ".expanded a" ).each(function(index) {
              if($(this).parent().parent().hasClass('sub-menu')){
                $(this).next().addClass('collapse');
              }
              if(current.parent().parent().hasClass('menu')){
                $(this).next().addClass('collapse');
              }
            });
            if(!$(this).parent().hasClass('leaf')){
              e.preventDefault();
            }
            if($(this).next().hasClass('collapse')){
              $(this).next().removeClass('collapse');
            } else {
              $(this).next().addClass('collapse');
            }
          });
        });
      }
    }
  }
  
  Drupal.behaviors.ddd_equal_height = {
    attach: function(context, settings) {
      $(".view-nodequeue-1.view-display-id-block .title-vue-competences").matchHeight();
    }
  }
  
})(jQuery);