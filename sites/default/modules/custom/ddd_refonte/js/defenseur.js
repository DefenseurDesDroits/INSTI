(function($) {
  Drupal.behaviors.faq = {
    attach: function(context, settings) {

      $(document).ready(function() {
          $('#edit-sendform').on('click',function (e) {
              e.preventDefault();
              $('#fire-form').click();
          });

        //Bouton checked ou pas

          stylecheck();
          function stylecheck(){
              $('input.wrapper-check').each(function( index ) {
                  var id = $(this).val();
                  if ($(this).prop('checked')) {
                      //$(this).closest('.control-label').addClass('active');
                      $(this).closest('.form-item').find('label').addClass('active');
                      $('#txth'+id).removeClass('none');
                  } else {
                      //$(this).closest('.control-label').removeClass('active');
                      $(this).closest('.form-item').find('label').removeClass('active');
                      $('#txth'+id).addClass('none');
                  }
              });
          }
            $('.wrapper-check').each(function( index ) {
                //$(this).closest('.control-label').addClass('wrapper-check-label');
            });
          $("input.wrapper-check").click(function() {
              stylecheck();
              //$(this).closest('.control-label').toggleClass('active');
          });

        //Cartes cliqué ou pas

        $(".disc").click(function() {

          let radio = $(this).find("input").attr('id');

          if (!$("#" + radio).prop('checked')) {

            $("#" + radio).prop("checked", true);

            transformcard(this);

          } else if ($("#" + radio).prop('checked')) {

            $("#" + radio).prop("checked", false);

            let img = $(this).find("img").attr('id');
            $("#" + img).animate({width: '233px'});

            let txthide = $(this).find(".hidden-size").attr('id');
            $("#" + txthide).addClass('hide');
            let detail = $(this).find(".subtitle-text").attr('id');
            $("#" + detail).removeClass('hidden');

            let border = $(this).find(".column-1").attr('id');

            $("#" + border).css("border", "1px solid #ddd");
            $("#" + border).css("border-width", "1px");
            $("#" + border).removeClass("check-active");
            var active = false;
              $(".wrapper-etape-1 .column-1").each(function( index ) {
                  if($(this).hasClass("check-active")){
                      active = true;
                  }
              });
              if(!active){
                  $(".wrapper-etape-1 .column-1").each(function( index ) {
                      $(this).removeClass("active");
                  });
              }
          }

        });

        function transformbtn(btn){

        }



        function transformcard(card){

            let img = $(card).find("img").attr('id');
            $("#" + img).animate({width: '135px'});

            let txthide = $(card).find(".hidden-size").attr('id');
            $("#" + txthide).removeClass('hide');

            let detail = $(card).find(".subtitle-text").attr('id');
            $("#" + detail).addClass('hidden');

            let border = $(card).find(".column-1").attr('id');

            $("#" + border).css("border-color", $("#"+border).attr('color'));
            $("#" + border).css("border-width", "5px");
            $("#" + border).addClass("check-active");
            $(".wrapper-etape-1 .column-1").each(function( index ) {
                if(!$(this).hasClass("active")){
                    $(this).addClass("active");
                }
            });
        }










      });
    }
  }
})(jQuery);
