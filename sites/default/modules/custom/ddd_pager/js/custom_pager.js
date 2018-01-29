//Dirty hack to alter native pager...
//Change the title attributes

$(document).ready(function (){
  $('.taxonomy-subtheme .pagination a[title]').each( function() {
    $(this).attr('title', $(this).attr('title') + " des " + $('.taxonomy-subtheme .bloc-title').text().trim().toLowerCase());
  });

  $('.taxonomy-ctasso .pagination a[title]').each( function() {
    $(this).attr('title', $(this).attr('title') + " des " + $('.taxonomy-ctasso .bloc-title').text().trim().toLowerCase());
  });
})

$(document).ajaxComplete(function() {
  $('.taxonomy-ctasso .pagination a[title]').each( function() {
    $(this).attr('title', $(this).attr('title') + " des " + $('.taxonomy-ctasso .bloc-title').text().trim().toLowerCase());
  });
});
