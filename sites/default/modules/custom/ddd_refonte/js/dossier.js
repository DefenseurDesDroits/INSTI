(function ($) {
    Drupal.behaviors.dossier = {
        attach: function (context, settings) {

            $('.page-votre-dossier .messages.error').appendTo('.wrapper-error');
            if($('.page-votre-dossier #edit-num-dossier').hasClass('error')){
                $('.wrapper-encart').hide();
                $('.wrapper-suivi-dossier img').hide();
            }

            // let regex1 = /\d{2}-\d{6}/;
            // let regex2 = /\d{2}-W-\d{6}/;
            // let inputvalue = $('#dossierinput').val();
            //
            // $('#sendbtn').on("click",function(){
            //     if (regex1.test(inputvalue)) {
            //         console.log('1');
            //         // post(inputvalue,1);
            //     } else if (regex2.test(inputvalue)){
            //         console.log('2');
            //         // post(inputvalue,2);
            //     }else{
            //         console.log("error");
            //     }
            // })
        }
    };
})(jQuery);
