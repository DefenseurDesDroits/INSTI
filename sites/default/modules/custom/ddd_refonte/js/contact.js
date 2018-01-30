(function($) {
    Drupal.behaviors.faq = {
        attach: function(context, settings) {
            $(document).ready(function() {
                var resp = "<div class='col-md-12 text-center'>" +
                    "<div class='1 tel imgmin hidden'></div>" +
                    "<div class='2 loc imgmin hidden'></div>" +
                    "<div class='3 letter imgmin hidden'></div></div>";
                $("#main-contact").prepend(resp);

                $(".imgmin").click(function() {
                    var id = $(this).attr("class").charAt(0);
                    $("#" + id).removeClass('hidden');
                    for (var i = 0; i <= 3; i++) {
                        if (id != i) {
                            $("#" + i).addClass('hidden');
                            $('.'+i).removeClass('letter3')
                            $('.'+i).removeClass('loc2')
                            $('.'+i).removeClass('tel1')
                        }
                    }
                    switch ($(this).attr('class').charAt(0)) {
                        case "1":
                        $('.'+id).addClass('tel1')
                        break;
                        case "2":
                        $('.'+id).addClass('loc2')
                        break;
                        case "3":
                        $('.'+id).addClass('letter3')
                        break;
                    }
                })

                function show() {
                    $(".1,.2,.3").removeClass('hidden');
                    $("#2,#3,#mail,#delegate,#phone").addClass('hidden');
                    $("#1").removeClass('hidden');
                    $('.1').addClass('tel1')
                    $('.2').removeClass('loc2')
                    $('.3').removeClass('letter3')
                }

                function hide() {
                    $(".1,.2,.3").addClass('hidden');
                    $("#1,#2,#3,#mail,#delegate,#phone").removeClass('hidden');
                }

                if ($(window).width() <= 992) {
                    show();
                }

                $(window).on('resize', function(id) {
                    var win = $(this); //this = window
                    if (win.width() <= 985) {
                        show();
                    }
                    if (win.width() > 985) {
                        hide();
                    }
                });

            });
        }
    }
})(jQuery);
