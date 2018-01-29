(function($) {
    Drupal.behaviors.faq = {
        attach: function(context, settings) {

            $(document).ready(function() {


              $(".btstyle").click(function(){

                var btn = this.id;
                var chk = $("#"+btn).find("input").attr('id');
                if($('#'+chk).prop('checked')){
                  $('#'+chk).prop('checked', false);
                  $('#'+btn).removeClass('btstylepressed');
                }
                else{
                  $('#'+chk).prop('checked', true);
                  $('#'+btn).addClass('btstylepressed');

                }
              })

                $(".disc").click(function() {

                    var radio = $(this).find( "input" ).attr('id');
                    $("#" + radio).prop("checked", true);


                      backward(radio);

                      var img = $(this).find( "img" ).attr('id');

                      if ($("#" + img).width != '135px') {
                        $("#" + img).animate({
                          width: '135px'
                        });
                        var subtitle = $(this).find( "h2" ).attr('id');
                        $("#" + subtitle).animate({
                          'font-size': '25px'
                        });
                        var txthide = $(this).find( ".hidden-size" ).attr('id');
                        $("#" + txthide).removeClass('hide');

                        var detail = $(this).find( ".subtitle-text" ).attr('id');
                        $("#" + detail).addClass('hidden');

                        var border = $(this).find( ".column-1" ).attr('id');
                        var color = $("#"+border).attr('title');

                        $("#" + border).css("border-color", color);
                        $("#" + border).css("border-width", "5px");
                      }
                });

                function backward(radio) {

                    var tab = [1, 2, 3, 4, 5];
                    $(tab).each(function() {
                    var here ="edit-radio-"+this;
                        if ( here != radio) {

                            var parent = $("#"+here).parents().get(2);

                            var img = $(parent).find( "img" ).attr('id');

                            $("#" + img).animate({
                                width: '233px'
                            });

                            var subtitle = $(parent).find( "h2" ).attr('id');
                            $("#" + subtitle).animate({
                                'font-size': '26px'
                            });

                            var txthide = $(parent).find(".hidden-size").attr('id');
                            $("#" + txthide).addClass('hide');
                            var detail = $(parent).find(".subtitle-text").attr('id');
                            $("#" + detail).removeClass('hidden');

                            var border = $(parent).find(".column-1").attr('id');
                            $("#" + border).css("border", "1px solid #ddd");
                            $("#" + border).css("border-width", "1px");
                        }
                    })
                };
            });
        }
    }
})(jQuery);
