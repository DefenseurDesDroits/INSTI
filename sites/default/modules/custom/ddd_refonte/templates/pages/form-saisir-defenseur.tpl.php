<?php
// print drupal_render($form['name']);
// print drupal_render($form['submit']);

global $base_url;
$img_url = $base_url ."/". drupal_get_path('theme', 'soclelab_ddd_v2') . '/img/content/defenseur/';




  $firstp= "<h1 class='page-header' style='padding-bottom:0;'>POUVEZ-VOUS SAISIR LE DÉFENSEUR DES DROITS ?</h1>
    <p class='subtitle-text'>Le Défenseur des Droits agit sur 5 missions distinctes.</p>
    <p class='subtitle-text'>Votre réclamation concerne:</p>
    <br><br>
    <div class='row'>
    <div class='col-md-2 col-sm-4 col-xs-12 disc  col-md-offset-1'>
    <div class='thumbnail column-1' id='border-1' title='#4db6ac' >
    <img src=".$img_url.'home-missions-picto1.png'." class='img-responsive' id='pic-1' alt='Home'>
    <div class='caption'>
    <h2 class='column-text' id='subtitle-1'>UNE ADMINISTRATION OU UN SERVICE PUBLIC</h2>
    <p class='subtitle-text detail' id='detail-1'>+de détails</p>
    <p class='hide hidden-size' id='hidden-text-1'>Une Discrimination est une inégalité de traitement fondée sur un critère interdit par la loi et dans un domaine cité par la loi.
    A ce jour, 20 critères de discrimination sont fixés par la loi. </p>
    </div>"
    .drupal_render($form['radio']['1'])
    ."</div>
    </div>
    <div class='col-md-2 col-sm-4 col-xs-12 disc' >
      <div class='thumbnail column-1' id='border-2' title='#f44336'>
        <img src=".$img_url.'home-missions-picto2.png'." id='pic-2' alt='Home'>
        <div class='caption'>
          <h2 class='column-text' id='subtitle-2' >UNE DISCRIMINATION</h2>
          <p class='subtitle-text detail' style='margin-top:38px;' id='detail-2'>+de détails</p>
          <p class='hide hidden-size' id='hidden-text-2' style='margin-bottom:25px;'>Une Discrimination est une inégalité de traitement fondée sur un critère interdit par la loi et dans un domaine cité par la loi.
        A ce jour, 20 critères de discrimination sont fixés par la loi. </p>
        </div>"
        .drupal_render($form['radio']['2'])
        ."</div>
        </div>
    <div class='col-md-2 col-sm-4 col-xs-12 disc'>
      <div class='thumbnail column-1' id='border-3' title='#FFE27D'>
        <img src=".$img_url.'home-missions-picto3.png'." id='pic-3' alt='Home'>
        <div class='caption'>
          <h2 class='column-text' id='subtitle-3'>UN ENFANT OU UN ADOLESCENT</h2>
          <p class='subtitle-text detail' id='detail-3' >+de détails</p>
          <p class='hide hidden-size' id='hidden-text-3'>Une Discrimination est une inégalité de traitement fondée sur un critère interdit par la loi et dans un domaine cité par la loi.
        A ce jour, 20 critères de discrimination sont fixés par la loi. </p>
        </div>"
       .drupal_render($form['radio']['3'])
       ."</div>
    </div>
    <div class='col-md-2 col-sm-4 col-xs-12 disc'>
      <div class='thumbnail column-1' id='border-4' title='#673AB7'>
        <img src=".$img_url.'home-missions-picto4.png'." id='pic-4' lt='Home'>
        <div class='caption'>
          <h2 class='column-text' id='subtitle-4'>UN COMPORTEMENT DES FORCES DE SECURITE</h2>
          <p class='subtitle-text detail' id='detail-4' >+de détails</p>
          <p class='hide hidden-size' id='hidden-text-4'>Une Discrimination est une inégalité de traitement fondée sur un critère interdit par la loi et dans un domaine cité par la loi.
        A ce jour, 20 critères de discrimination sont fixés par la loi. </p>
        </div>"
        .drupal_render($form['radio']['4'])
        ."</div>
       </div>
      <div class='col-md-2 col-sm-4 col-xs-12 disc'>
      <div class='thumbnail column-1' id='border-5' title='#FFA726'>
        <img src=".$img_url."home-missions-picto5.png"." id='pic-5' alt='Home'>
        <div class='caption'>
          <h2 class='column-text' id='subtitle-5'>LOREM IPSUM DOLOR SIT AMET</h2>
          <p class='subtitle-text detail' id='detail-5'>+de détails</p>
          <p class='hide hidden-size' id='hidden-text-5'>Une Discrimination est une inégalité de traitement fondée sur un critère interdit par la loi et dans un domaine cité par la loi.
        A ce jour, 20 critères de discrimination sont fixés par la loi. </p>
        </div>"
         .drupal_render($form['radio']['5'])
        ."</div>
        </div>
    </div>
    <div class='col-md-offset-4 col-md-12'>"
    .drupal_render($form['next'])
    ."</div>
    <br><br><br>";


$secondp ="<h1 class='page-header' style='padding-bottom:0;'>POUVEZ-VOUS SAISIR LE DÉFENSEUR DES DROITS ?</h1>
        <p class='subtitle-text'>Dans quel domaine pensez-vous avoir été victime de discrimination ?</p>
        <p class='subtitle-text'>(plusieurs choix possibles)</p>
        <br><br>
        <div class='row col-md-12 text-center'>";
    for ($j=0; $j < $form['btnsize']['#value']; $j++) {
            $secondp .= "<button class='btstyle form-submit' type='button' id='check".$j."'>"
            .$form['check'][$j]['#title']
            ."<div class='none'>"
            .drupal_render($form['check'][$j])
            ."</div>
            </button>";
          }

    $secondp .= "</div>
                  <br><br>
                  <h2 style='text-align:center;'>Bien et service</h2>
                  <p style='text-align:center;'>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam blandit rhoncus risus vel sodales. Sed sit amet vestibulum nunc, ut gravida urna. Integer pharetra velit non mattis maximus. Nam nibh elit, sagittis nec nibh non, semper consectetur dolor. In convallis dignissim turpis a auctor. Aenean varius pellentesque sem eget faucibus. Aliquam egestas viverra dui, nec euismod urna accumsan at. Fusce viverra, elit sit amet volutpat commodo, elit lectus iaculis nibh, sit amet ultricies quam eros vitae sem. Phasellus a tempor lectus. Cras a tincidunt quam. Ut ac lectus sit amet leo porttitor aliquet rutrum eu risus. Quisque at gravida sapien, ac posuere orci. Pellentesque volutpat velit nec mollis ultricies.</p>
                  <br><br><br>
                  <div class='col-md-offset-3 col-md-7 col-xs-12'>"
                  .drupal_render($form['prev'])
                  .drupal_render($form['next1'])
                  ."</div>
                   <br><br><br><br>";



      $thirdp ="<h1 class='page-header' style='padding-bottom:0;'>POUVEZ-VOUS SAISIR LE DÉFENSEUR DES DROITS ?</h1>
                <p class='subtitle-text'>Dans quel domaine pensez-vous avoir été victime de discrimination ?</p>
                <p class='subtitle-text'>(plusieurs choix possibles)</p>
                <br><br>
                <div class='row col-md-12'>";

                for ($j=0; $j < $form['btnsize']['#value']; $j++) {
                        $thirdp .= "<button class='btstyle form-submit' type='button' id='check".$j."'>"
                        .$form['checksec'][$j]['#title']
                        ."<div class='none'>"
                        .drupal_render($form['checksec'][$j])
                        ."</div>
                        </button>";
                      }

    $thirdp .= "</div>
                <br><br><br><br><br>
                <h2 style='text-align:center;'>Bien et service</h2>
                <p style='text-align:center;'>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Etiam blandit rhoncus risus vel sodales. Sed sit amet vestibulum nunc, ut gravida urna. Integer pharetra velit non mattis maximus. Nam nibh elit, sagittis nec nibh non, semper consectetur dolor. In convallis dignissim turpis a auctor. Aenean varius pellentesque sem eget faucibus. Aliquam egestas viverra dui, nec euismod urna accumsan at. Fusce viverra, elit sit amet volutpat commodo, elit lectus iaculis nibh, sit amet ultricies quam eros vitae sem. Phasellus a tempor lectus. Cras a tincidunt quam. Ut ac lectus sit amet leo porttitor aliquet rutrum eu risus. Quisque at gravida sapien, ac posuere orci. Pellentesque volutpat velit nec mollis ultricies.</p>
                <br><br><br>
                <div class='col-md-offset-3 col-md-7'>"
                .drupal_render($form['prev1'])
                .drupal_render($form['next2'])
                ."</div>
                 <br><br><br><br>";


$finalp .= "<h1 class='page-header' style='padding-bottom:0;'>POUVEZ-VOUS SAISIR LE DÉFENSEUR DES DROITS ?</h1>
          <p class='subtitle-text'>Vous semblez avoir été victime de 'Discrimination'.</p>
          <p class='subtitle-text'>Le Défenseur des droits promeut l'égalité des droits.</p>
          <br>
          <p class='text-center'>Vous pouvez dès à présent compléter votre demande de saisine pré-remplie au Défenseur des Droits.</p>
          <p class='text-center'>Votre histoire est importante, nous sommes là pour vous accompagner dans vos démarches.</p>
          <br>
          <p class='text-center'> Vous avez trois possibilités pour contacter le Défenseur des Droits</p>
          <br>
          <div class='row col-lg-offset-2 col-md-12 col-xs-12 col-lg-12'>
          "
          .drupal_render($form['mail'])
          .drupal_render($form['sendform'])
          .drupal_render($form['meet'])
          ."</div>
           <br>
           <br>
           <br>
           <br>
           <div class='col-md-12'>
           <p class='text-center'>Si vous avez plus de questions concernant la demande, ou la saisie en ligne,</p>
           <p class='text-center'>vous pouvez nous contacter du lundi au vendre de 8h00 à 20h00 (coût d'un appel local) au:</p>
           <p class='text-center'><a href='tel:0969390000'><b>09 69 39 00 00</b></a></p>
           </div>
           <br><br>
           ";
//mail sendform meet
      switch ($form['step']['#value']) {
        case '1':
        print($firstp);
          break;
        case '2':
        print($secondp);
          break;
        case '3':
        print($thirdp);
          break;
        case '4':
        print($finalp);
          break;

      }
 print drupal_render_children($form);
