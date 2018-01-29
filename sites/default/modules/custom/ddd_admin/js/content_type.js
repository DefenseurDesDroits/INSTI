var $ = jQuery.noConflict();

$(document).ajaxStop(function() {
    if ($('#article-node-form').length){
        
        $('#edit-field-article-type-und-0-tid-select-1 option').each(function(){
            switch($(this).text()) {
                case "Décision": 
                    $(this).remove();
                    break;
                case "Lettres d'information" :
                    $(this).remove();
                    break;
                case "Offres d'emploi" :
                    $(this).remove();
                    break;
                case "Stages" :
                    $(this).remove();
                    break;
                case "Règlement amiable" :
                    $(this).remove();
                    break;
                case "Publications" :
                    $(this).remove();
                    break;
            }
        });
        
        $('#edit-field-article-type-und-0-tid-select-2 option').each(function(){
            if($(this).text() == "Médiathèque") {
                $(this).remove();
            }
        });
    }
    
    if ($('#ct-offre-node-form').length){
        
        $('#edit-field-article-type-und-0-tid-select-1 option').each(function(){
            switch($(this).text()) {
                case "Décision": 
                    $(this).remove();
                    break;
                case "Point de vue du Défenseur" :
                    $(this).remove();
                    break;
                case "Histoires vécues" :
                    $(this).remove();
                    break;
                case "Questions / réponses" :
                    $(this).remove();
                    break;
                case "Règlement amiable" :
                    $(this).remove();
                    break;
                case "Actualités" :
                    $(this).remove();
                    break;
                case "Presse" :
                    $(this).remove();
                    break;
                
            }
        });
    }
    
    if ($('#ct-decision-node-form').length){
        
        $('#edit-field-article-type-und-0-tid-select-1 option').each(function(){
            if($(this).text() != "Décision" && $(this).text() != "Règlement amiable")
            {
                $(this).remove();
            }
        });
    }  
    
    if ($('#ct-outils-node-form').length){
    	$('#edit-field-article-type-und-0-tid-select-1').prop('disabled', 'disabled');
    }
    if ($('#blog-node-form').length){
    	$('#edit-field-article-type-und-0-tid-select-1').prop('disabled', 'disabled');
    }
    
});

