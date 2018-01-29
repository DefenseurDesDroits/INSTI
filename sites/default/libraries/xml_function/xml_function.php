<?php

// Retourne un tableau des fichiers dans le dossier $directory_path ou FALSE si le dossier n'existe pas
function files_into_directory($directory_path) {
  $files = FALSE;
  if (file_exists($directory_path)) {
    $files = file_scan_directory($directory_path, '#\.xml$#');
  }
  return $files;
}

// Donne les messages d'information sur le contenu du dossier
function get_directory_path_msg($directory_path) {
  $msg = 'No directory path';
  if ($directory_path) {
    if (($files = files_into_directory($directory_path)) !== FALSE) {
      $msg = $directory_path . ' : ' . count($files) . ' XML';
    }
    else {
      $msg = 'Directory ' . $directory_path . ' don\'t exists';
    }
  }
  return $msg;
}

function node_exist($type, $title) {
  $query = new EntityFieldQuery();
  $entities = $query->entityCondition('entity_type', 'node')
    ->entityCondition('bundle', $type)
    ->propertyCondition('title', $title)
    ->range(0, 1)
    ->execute();

  if (array_key_exists('node', $entities)) {
    return key($entities['node']);
  }
}

function libxml_display_error($error)
{
  $return = "<br/>\n";
  switch ($error->level) {
  	case LIBXML_ERR_WARNING:
  	  $return .= "<b>Warning $error->code</b>: ";
  	  break;
  	case LIBXML_ERR_ERROR:
  	  $return .= "<b>Error $error->code</b>: ";
  	  break;
  	case LIBXML_ERR_FATAL:
  	  $return .= "<b>Fatal Error $error->code</b>: ";
  	  break;
  }
  $return .= trim($error->message);
  if ($error->file) {
    $return .=    " in <b>$error->file</b>";
  }
  $return .= " on line <b>$error->line</b>\n";

  return $return;
}

function error_to_excpetion($errno, $errstr, $errfile, $errline, array $errcontext) {
  // error was suppressed with the @-operator
  if (0 === error_reporting()) {
    return false;
  }
  throw new ErrorException($errstr, 0, $errno, $errfile, $errline);
}
?>