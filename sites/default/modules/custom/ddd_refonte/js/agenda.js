(function ($) {
  Drupal.behaviors.zabutocalendar = {
    attach: function (context, settings) {
      $("#my-calendar").zabuto_calendar({
        language: settings.language,
        ajax: {
          url: settings.url,
          modal: false
        }
      });
    }
  };
})(jQuery);