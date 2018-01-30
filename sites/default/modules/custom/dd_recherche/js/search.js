(function($) {

    Drupal.behaviors.search_hp = {
        attach: function(context, settings) {
            var lang = $('html').attr('lang');            
            $('#search').keypress(function(e) {
                if($(this).val().length >= 0){
                    $('.fa-search').css('color', '#0976b7');
                } else {
                    $('.fa-search').css('color', '#aaaaaa');
                }
            });
            $("#loupe").click(function(event) {
                event.preventDefault();
                $("#loupe-search").addClass('hidden')
                if ($(window).width() < 768) {
                    if($('#myNavbar').hasClass('in')){
                      $('.navbar-toggle').trigger('click');
                    }
                    $('header').addClass('header-open2');
                    hide_show("show", "div-search");
                    $("#responsiv-close").removeClass('hidden')
                    $("#loupe-search").addClass('hidden')
                    hide_show("hide", "clean")
                    $("#search").focus();
                } else {
                    hide_show("show", "clean")
                    hide_show("show", "div-search");
                    $("#search").focus();
                    $("#loupe-search").addClass('hidden')
                }
            });

            $("#loupe-search").keypress( function(e) {
                console.log('toto');
            });

            $("#responsiv-close").click(function(event) {
                event.preventDefault();
                $('header').removeClass('header-open2');
                $("#loupe-search").removeClass('hidden')
                hide_show("hide", "div-search");
                $("#responsiv-close").addClass('hidden')
            })

            $("#clean").click(function(event) {
                event.preventDefault();
                hide_show("hide", "div-search");
                $("#loupe-search").removeClass('hidden')
            });


            $('#getit').click(function(event) {
                event.preventDefault();
                hide_show("show", "results");
                $('#content-article').empty();
                $('#content-faq').empty();
                $('#content-publications').empty();
                var title = $('#search').val();
                get_result_json(title, settings.cat.article, 'Arti', 'article');
                get_result_json(title, settings.cat.faq, 'FAQ', 'faq');
                get_result_json(title, settings.cat.publications, 'Publi', 'publications');
                if ($('.more-results').length == 0) {
                    var allResult = '<div class="more-results">'
                    allResult += '<a class="btn btn-lg btn-success" href="/'+ lang +'/ma-recherche?title=' + title + '&cat=all" role="button">' + settings.cat.tradresult + '</a>'
                    allResult += '</div>';
                    $(allResult).insertAfter('#results .row');
                }
            });
            $('.search-form').keypress(function(e) {
                if(e.which == 13) {
                    e.preventDefault();
                    hide_show("show", "results");
                    $('#content-article').empty();
                    $('#content-faq').empty();
                    $('#content-publications').empty();
                    var title = $('#search').val();
                    get_result_json(title, settings.cat.article, 'Arti', 'article');
                    get_result_json(title, settings.cat.faq, 'FAQ', 'faq');
                    get_result_json(title, settings.cat.publications, 'Publi', 'publications');
                    if ($('.more-results').length == 0) {
                        var allResult = '<div class="more-results">'
                        allResult += '<a class="btn btn-lg btn-success" href="/' + lang + '/ma-recherche?title=' + title + '&cat=all" role="button">' + settings.cat.tradresult + '</a>'
                        allResult += '</div>';
                        $(allResult).insertAfter('#results .row');
                    }
                }
            });

            function hide_show(val, id) {
                if (val === "hide") {
                    $("#" + id).css("display", "none");
                } else {
                    $("#" + id).css("display", "block");
                }
            }

            var checkSize = function() {
                if (($(window).width()) < 768) { // xs
                    hide_show("hide", "div-search");
                }
            }

            checkSize();
            //  $(window).resize(checkSize);

            function get_result_json(title, categories, type, name) {
                var url = '/' + lang + '/search-cat/';
                if (title.length == 0) {
                    url = url + categories;
                } else {
                    url = url + title + '/' + categories;
                }
                if(name == 'publications'){
                    var url = '/' + lang + '/search-pub/' + title;
                }
                if(name == 'faq'){
                    var url = '/' + lang + '/recherche-xml';
                } 
                $.ajax({
                    type: 'POST',
                    url: url,
                    data: {search: title},
                    beforeSend: function() {
                        $('#content-' + name).append('<i class="fa fa-refresh fa-spin fa-3x fa-fw margin-bottom"></i>');
                    },
                    success: function(data) {
                        console.log(data);
                        // console.log(data.length);
                        $.each(data, function(index, value) {
                            if ($(window).width() < 768) {
                                var res;
                                $('.title').hide();
                                res = "<div class='col-md-12 text-group' style='margin-top:20px;'>";
                                if (value.img) {
                                    // res = "";
                                    res += "<div class='col-xs-5'><img class='img-responsive' src=" + value.img.src + "></img></div>";
                                    res += "<div class='col-xs-8'><h3>" + name.toUpperCase() + "</h3><h3 class='text-res'>" + value.title + '</h3>' + '<div>' + value.link + '</div></div></div>';
                                } else {
                                    res += "<div class='col-xs-12'><h3>" + name.toUpperCase() + "</h3><h3 class='text-res'>" + value.title + '</h3>' + '<div>' + value.link + '</div></div></div>';
                                }
                            } else {
                                var res;
                                res = "<div class='col-md-12 search-res' style='margin-top:20px;'>";
                                if (value.img) {
                                    // res = "";
                                    res += "<div class='col-md-3'><img class='img-responsive' src=" + value.img.src + "></img></div>";
                                    res += "<div class='col-md-8'><h3 class='text-res'>" + value.title + '</h3>' + '<div>' + value.link + '</div></div></div>';
                                } else {
                                    res += "<div class='col-md-10'><h3 class='text-res'>" + value.title + '</h3>' + '<div>' + value.link + '</div></div></div>';
                                }
                            }
                            $('#content-' + name).append(res);
                        });
                        $('#content-' + name + ' .fa-refresh').remove();
                        if (data.length == 0) {
                            $('#content-' + name).append(settings.cat.tradnoresult);
                        } else {
                            var titlend = '';
                            switch (name) {
                                case 'article':
                                    titlend = $('.title').eq(0).text();
                                    break;
                                case 'publications':
                                    titlend = $('.title').eq(1).text();
                                    break;
                                case 'faq':
                                    titlend = $('.title').eq(2).text();
                                    break;
                            }
                            $('#content-' + name).append('<p style="text-align:center; margin-left:15px;" class="more"><a id=articles href="/'+ lang +'/ma-recherche?title=' + title + '&cat=' + name + '">' + settings.cat.tradresult2 + '' + titlend + '</a></p>');
                        }
                    }
                });
            }
        }
    }
})(jQuery);
