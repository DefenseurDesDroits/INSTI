<?php
  $nodes = $form['node'];

  $firstp = "<h1 class='page-header' style='padding-bottom:0;'>POUVEZ-VOUS SAISIR LE DÉFENSEUR DES DROITS ?</h1>
    <p class='subtitle-text'>Le Défenseur des Droits agit sur 5 missions distinctes.</p>
    <p class='subtitle-text'>Votre réclamation concerne:</p>
    <br><br>
    <div class='row wrapper-etape-1'>";

    for ($i=0; $i < sizeof($nodes['#value']); $i++) {
        if (is_string($form['state']['#value'][2]['radio'][$i])) {
            $firstp .= "<div class='col-lg-15 col-md-4 col-sm-6 col-xs-12 disc checkedbtn'>";
        } else {
            $firstp .= "<div class='col-lg-15 col-md-4 col-sm-6 col-xs-12 disc'>";
        }
        $firstp .= "<div class='thumbnail column-1' id='border-".$i."' color='".$nodes['#value'][$i]->field_bordercolor['und']['0']['value']."'>
          <img src=".file_create_url($nodes['#value'][$i]->field_image['und']['0']['uri'])." class='img-responsive' id='pic-".$i."' alt='Home'>
              <div class='caption'>
                <h2 class='column-text' id='subtitle-".$i."'>".$nodes['#value'][$i]->title."</h2>
                <p class='subtitle-text detail' id='detail-".$i."'>+ de détails</p>
                <p class='hide hidden-size' id='hidden-text-".$i."'>".$nodes['#value'][$i]->body['und']['0']['value']."</p>
              </div>"
            .drupal_render($form['radio'][$i])
        ."</div>
      </div>";
    }


  $firstp.= "</div> <div class='col-md-10 col-sm-10 col-lg-12'>"
    .drupal_render($form['next'])
    ."</div>
    <br><br><br>";


$secondp ="<h1 class='page-header' style='padding-bottom:0;'>POUVEZ-VOUS SAISIR LE DÉFENSEUR DES DROITS ?</h1>
        <p class='subtitle-text'>".drupal_render($form['title'])."</p>
        <p class='subtitle-text'>".drupal_render($form['multi'])."</p>
        <br><br>
        <div class='row col-md-8 col-md-offset-2 text-center'>";
        $secondp .= drupal_render($form['check']).'</div>';
        $secondp .="<br><div class='row col-md-8 col-md-offset-2 text-center'><div id='btntxt'>";
        $secondp .= drupal_render($form['hiddentxt']).'</div></div>';
//      $j = 0;
//      foreach ($form['check']['#options'] as $value) {
//        if ($j % 5 === 0) {
//          $secondp .= "</div><div class='row col-md-12 text-center'>";
//        }
//        if (in_array($value ,$form['step2']['#values'])){
//          $secondp .= "<button class='checkedbtn btstyle btmargin form-submit' type='button' value='".$value." ' id='check".$j."'>";
//        } else {
//          $secondp .= "<button class='btstyle btmargin form-submit' type='button' value='".$value." ' id='check".$j."'>";
//        }
//        $secondp .= $value
//        ."<div class='none'>"
//        .drupal_render($form['check'][array_keys($form['check']['#options'])[$j]])
//        ."</div>
//        </button>";
//        $j++;
//      }
//
//      $secondp .="<br><br><div id='btntxt'>";
//      $i=0;
//      foreach ($form['check']['#options'] as $value) {
//        $secondp .= "
//        <div class='none' id='txth".$i."'>
//          <div class='titre-contact' style='text-align:center;margin-top:10px;'>".$value."</div>
//          <p style='text-align:center;'>".$form['hiddentxt']['#value'][$i]."</p>
//        </div>";
//        $i++;
//      }

    $secondp .= "<br> </div>
                  </div>
                  <br><br>
                  </div>
                  <br><br><br>
                  <div class='col-md-offset-3 col-md-7 col-xs-12'>"
                  .drupal_render($form['prev'])
                  .drupal_render($form['next1'])
                  ."</div>
                   <br><br><br><br>";



$finalp .="<h1 class='page-header' style='padding-bottom:0;'>POUVEZ-VOUS SAISIR LE DÉFENSEUR DES DROITS ?</h1>
          <p class='subtitle-text'>Vous semblez avoir été victime de Discrimination.</p>
          <p class='subtitle-text'>Le Défenseur des droits promeut l'égalité des droits.</p>
          <br>
          <p class='text-center'>Votre réclamation concerne le domaine:</p>
          <div class='col-lg-offset-5 col-md-offset-5 col-sm-offset-4 col-xs-offset-2'>";

          foreach ($form['valueone']['#value']as $etape1){
            $finalp .= "<p class='finalres'>".$etape1->title."</p>";
          }
          $finalp .="</div>";
          if(isset($form['formsteps']['#value'])&&!empty($form['formsteps']['#value'])){
            foreach ($form['formsteps']['#value'] as $formstep){

              $finalp .="<br>
              <p class='text-center'>".$formstep['type']."</p>
              <div class='col-lg-offset-5 col-md-offset-5 col-sm-offset-4 col-xs-offset-2'>
              <ul>";
              foreach ($formstep['value'] as $value){
                $finalp.="<li class='finalres'>- ".$value."</li>";
              }
              $finalp.="</ul></div>";
            }

          }

$finalp.= "
          <br /><br />
          <p class='subtitle-text' style='text-decoration: underline;'><a href='#' onclick='window.print();' class='print'>Imprimer ma réclamation</a></p>
          <br /><br />
          <p class='text-center'>Vous pouvez des à présent compléter votre demande de saisie pré-remplie au Défenseur des Droits</p>
          <p class='text-center'>Votre histoire est importante, nous sommes là pour vous accompagner dans vos démarches.</p>
          <br><div class='btnanswer text-center'>"
          .drupal_render($form['sendform'])."<br />
          </div>
          <div class='col-md-12 col-xs-12 col-lg-10 col-lg-offset-1'>
          <div class='col-md-4 col-xs-12 col-lg-4'>
          <div class='picto-mail picto'></div>
          <h2 class='text-center titleanswer'>SAISIR PAR COURRIER</h2>
          <p class='text-center'>Près de 400 délégués répartis sur l'ensemble du territoire national vous informent sur vos droits et peuvent proposer des solutions amiables ou engager une procédure.
          <div class='btnanswer text-center'>
          <a href=''#' class='btn btn-default form-submit'>SAISIR PAR COURRIER</a>
          </div>
          </p>
          </div><div class='col-md-4 col-xs-12 col-lg-4'>
          <div class='picto-delegue picto'></div>
          <h2 class='text-center titleanswer'>RENCONTRER UN DÉLÉGUÉ</h2>
          <p class='text-center'>Près de 400 délégués répartis sur l'ensemble du territoire national vous informent sur vos droits et peuvent proposer des solutions amiables ou engager une procédure.
          <div class='btnanswer text-center'>
          <a href=''#' class='btn btn-default form-submit'>RENCONTRER UN DÉLÉGUÉ</a>
            </div></p>
          </div>
          <div class='col-md-4 col-xs-12 col-lg-4'>
            <div class='picto-tel picto'></div>
            <h2 class='text-center titleanswer'>DIRECTEMENT PAR TÉLÉPHONE</h2>
            <p class='text-center'>
            Nos conseillers ovus répondent du lundi au vendred de 8h00 à 20h00 (coût d'un appel local) au:
            </p>
            <h2 class='text-center titleanswer tel-color'>09 69 39 00 00</h2>
            <br /><br /><br />
          </div>
          </div>
           <br><br>";
          //  dpm($form['state']['#value']);

    if (!empty($form['page_final']['#value']) && $form['page_final']['#value'] === "true") {
        print($finalp);
    } else {
        if ($form['page_num']['#value'] === 1) {
            print($firstp);
        } else{
            print($secondp);
        }
    }
 print drupal_render_children($form);
