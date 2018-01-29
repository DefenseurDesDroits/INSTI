// (function($) {
//
//   Drupal.behaviors.searchddd = {
//     attach: function(context, settings) {
//       $("#loupe").click(function(event) {
//         event.preventDefault();
//         hide_show("show", "div-search");
//         $("#search").focus();
//       });
//       $("#clean").click(function(event) {
//         event.preventDefault();
//         hide_show("hide", "div-search");
//       });
//       $('#getit').click(function(event) {
//         event.preventDefault();
//         hide_show("show", "results");
//         get();
//       });
//
//       var checkSize = function(){
//         if (($(window).width()) < 768) { // xs
//           hide_show("show", "div-search");
//         }
//       }
//
//       checkSize();
//       $(window).resize(checkSize);
//
//       //permet de vider les divs qui affiche le contenu
//       function clean() {
//           $('.search-results .row #Arti .fa-refresh').remove();
//           $('.search-results .row #Publi .fa-refresh').remove();
//           $('.search-results .row #FAQ .fa-refresh').remove();
//           $("[id^='articles']").detach();
//           $("[id^='pub']").detach();
//           $("[id^='com']").detach();
//       }
//       //permet de cacher ou afficher les div en fonction des param
//       function hide_show(val, id) {
//           if (val === "hide") {
//               $("#" + id).css("display", "none");
//           } else {
//               $("#" + id).css("display", "block");
//           }
//       }
//       //permet d'append le contenu au div
//       function app(id, id2, value) {
//           if ($("h4[id^=" + id2 + "]").length < 3) {
//               $("#" + id).append("<h4 id=" + id2 + ">" + value.title + "</h4>");
//               $("#" + id).append("<div id=" + id2 + ">" + value.Lien + "</div>");
//           }
//       }
//
//       //Sert à récuperer mes values et à les parser
//       function get() {
//           $.get("search-ddd/"+$('#search').val(), function(data, status) {
//               clean();
//               $.each(data, function(index, value) {
//                   switch (value.Type) {
//                       case "3"://3
//                           app("Arti", "articles", value);
//                           break;
//                       case "1698"://1698
//                           app("Publi", "pub", value);
//                           break;
//                       case "48"://48
//                           app("FAQ", "com", value);
//                   }
//               });
//               $("#Arti").append('<p class="more"><a id=articles href=search-publication/'+$('#search').val()+'>Afficher toutes les réponses</a></p>');
//               $("#Publi").append('<p class="more"><a id=pub href=search-articles/'+$('#search').val()+'>Afficher toutes les réponses</a></p>');
//               $("#FAQ").append('<p class="more"><a id=com href=search-faq/'+$('#search').val()+'>Afficher toutes les réponses</a></p>');
//           });
//       }
//     }
//   }
// })(jQuery);
