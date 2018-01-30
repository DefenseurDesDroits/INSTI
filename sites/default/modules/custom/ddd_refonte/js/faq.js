(function ($) {
    Drupal.behaviors.faq = {
        attach: function (context, settings) {

          var selectIds = $('#term1-1,#term1-2,#term1-3,#term1-4,#term2-1,#term2-2,#term2-3,#term2-4,#term3-1,#term3-2,#term3-3,#term3-4,#term4-1,#term4-2,#term4-3,#term4-4,#term5-1,#term5-2,#term5-3,#term5-4,#term6-1,#term6-2,#term6-3,#term6-4');
          selectIds.on('show.bs.collapse hidden.bs.collapse', function () {
              $(this).prev().find('.fa').toggleClass('fa-plus-circle fa-minus-circle');
          });
/*          $("#my-calendar").zabuto_calendar({
              ajax: {
                  url: "http://local.ddd:8080/DDD/fr/agenda/infos",
                  modal: true
              }
          });*/


        }
    };
})(jQuery);
