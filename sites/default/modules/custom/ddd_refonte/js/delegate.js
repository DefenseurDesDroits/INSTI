(function($) {
    Drupal.behaviors.delegateddd = {
        attach: function(context, settings) {
            $(document).ready(function() {
                get(settings.argument);
                $('.img-search-btn').on('click', function(){
                    var searchValue = $('.delegate-search').val();
                    get(searchValue);
                });
                function get(argument) {
                    $('.delegate-search').val(argument);
                    $.get(settings.urljson, function(data, status) {
                      var imgurl = settings.img_url;
                      var i = 0;
                      var htmlfinal = '';
                        $.each(data, function(index, value) {
                            if(argument !== 0){
                                if(value.zipcode.match("^" + argument)){
                                    htmlfinal += insert_html(value);
                                    i++;
                                }
                            } else {
                                htmlfinal += insert_html(value);
                                i++;
                            }
                        });
                    $('#delegates').empty();
                    $('#delegates').prepend('<div class="txt-resultats">' + i + settings.resultat.name + settings.resultat.categorie + '</div>');
                    $("#delegates").append(htmlfinal);
                    });
                };

                function insert_html(value){
                        htmlfinal = 0;
                        htmlfinal = "   <div class='row' id=" + value.zipcode + " name='deleg'>";
                        htmlfinal += "      <div class='col-md-12'>";
                        htmlfinal += "          <div class='top-delegue'>";
                        htmlfinal += "              <p class='titre-delegue'>" + value.name + " - <span class='ville-delegue'>" + value.city + "</span></p>";
                        htmlfinal += "              <p class='txt-delegue'>" + value.address + " " + value.zipcode + " " + value.city + "</p>";
                        htmlfinal += "              <p class='txt-delegue'>" + settings.traduction.tel + " : " + value.tel + " " + " - Fax : " + value.fax + "</p>";
                        htmlfinal += "          </div>";
                        htmlfinal += "      </div>";
                        console.log(value);
                for (var i = 0; i < value.del.length; i++) {
                        htmlfinal += "      <div class='col-xs-12 col-sm-6 col-md-6'>"
                        htmlfinal += "          <div class='delegue col-xs-12 col-sm-4 col-md-3'>"
                        htmlfinal += "              <div class='img-delegue' style='background-image:url("+settings.img_url+'/'+value.del[i].photo +")'></div>"
                        htmlfinal += "          </div>"
                        htmlfinal += "          <div class='delegue col-xs-12 col-sm-8 col-md-9'>"
                        htmlfinal += "              <div class='infos-delegue'>"
                        htmlfinal += "                  <p class='nom-delegue'>" + value.del[i].firstname + " " + value.del[i].lastname + "</p>"
                    for (var x = 0; x < value.del[i].duty.length; x++) {
                        htmlfinal += "                  <p class='perm-delegue'>" + settings.traduction.permanence + " : " + value.del[i].duty[x].day + " (" + value.del[i].duty[x].time + ")" + "</p>"
                    }
                        htmlfinal += "                  <p class='txt-delegue'>" + value.del[i].mobile + "</p>"
                        htmlfinal += '                  <div class="lls contact-delegue"><a href="/contacter-un-delegue?title=' + value.name + '&city=' + value.city + '&name=' + value.del[i].firstname + ' ' + value.del[i].lastname +'&email=' + value.del[i].email + '">' + settings.traduction.contact + '</a><span class="slash-blue"></span></div>';
                        htmlfinal += "              </div>";
                        htmlfinal += "          </div>";
                        htmlfinal += "      </div>";
                    }
                        htmlfinal += "  </div>";
                        return htmlfinal;
                }
            });
        }
    }
})(jQuery);
