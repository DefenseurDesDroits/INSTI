/*
 Copyright (c) 2003-2013, CKSource - Frederico Knabben. All rights reserved.
 For licensing, see LICENSE.md or http://ckeditor.com/license
*/
CKEDITOR.addTemplates("default",
{
	imagesPath:CKEDITOR.getUrl(CKEDITOR.plugins.getPath("templates")+"templates/images/"),
	templates:[{
	title: 'Accordeon',
	image: 'template-accordeon.gif',
	description: 'Un accordéon',
	html: 	'<br/><div class="panel-group" id="accordion">'+
				'<div class="panel panel-default">'+
					'<div class="panel-heading">'+
					'<a data-toggle="collapse" data-parent="#accordion" href="#collapse">'+
						'<h4 class="panel-title"><span class="glyphicon glyphicon-chevron-right"> &nbsp; </span>'+
								' &nbsp;&nbsp; &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;       '+						
						'</h4>'+
					'</a>'+
					'</div>'+
					'<div id="collapse" class="panel-collapse collapse in">'+
						'<div class="panel-body">'+
							'Texte caché de l\'accordeon'+
						'</div>'+
					'</div>'+
				'</div>'+
			'</div>'+
			'<br/>',
	}]

});