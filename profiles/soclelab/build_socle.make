api = 2
core = 7.x

; This project was built on Drupal 7.31, newer versions are not tested.
projects[drupal][version] = "7.x"

; ******************************************************
; Administration modules
projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc4"

projects[backup_migrate][subdir] = "contrib"
projects[backup_migrate][version] = "3.0"

projects[module_filter][subdir] = "contrib"
projects[module_filter][version] = "2.0-alpha2"


; ******************************************************
; Search modules
projects[apachesolr][subdir] = "contrib"
projects[apachesolr][version] = "1.7"

projects[apachesolr_attachments][subdir] = "contrib"
projects[apachesolr_attachments][version] = "1.3"

projects[apachesolr_autocomplete][subdir] = "contrib"
projects[apachesolr_autocomplete][version] = "1.4"

projects[apachesolr_sort][subdir] = "contrib"
projects[apachesolr_sort][version] = "1.0"

projects[facetapi][subdir] = "contrib"
projects[facetapi][version] = "1.5"

projects[ds][subdir] = "contrib"
projects[ds][version] = "2.6"

; ******************************************************
; Media modules
projects[scald][subdir] = "contrib"
projects[scald][version] = "1.2"

; ******************************************************
; Entity modules
projects[block_class][subdir] = "contrib"
projects[block_class][version] = "2.1"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.5"

projects[date][subdir] = "contrib"
projects[date][version] = "2.8"

projects[entityreference][subdir] = "contrib"
projects[entityreference][version] = "1.1"

projects[features_extra][subdir] = "contrib"
projects[features_extra][version] = "1.0-beta1"

projects[features][subdir] = "contrib"
projects[features][version] = "2.2"

projects[features_override][subdir] = "contrib"
projects[features_override][version] = "2.0-rc2"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0"

projects[field_collection][subdir] = "contrib"
projects[field_collection][version] = "1.0-beta7"

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.4"

projects[link][subdir] = "contrib"
projects[link][version] = "1.2"

projects[scald_file][subdir] = "contrib"
projects[scald_file][version] = "1.0-rc1"

projects[shs][subdir] = "contrib"
projects[shs][version] = "1.6"

projects[google_analytics][subdir] = "contrib"
projects[google_analytics][version] = "2.1"

; ******************************************************
; Multilingual modules
projects[i18n][subdir] = "contrib"
projects[i18n][version] = "1.11"

projects[l10n_update][subdir] = "contrib"
projects[l10n_update][version] = "1.0"

; ******************************************************
; Contribute modules
projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.4"

projects[ckeditor][subdir] = "contrib"

projects[ckeditor_link][subdir] = "contrib"
projects[ckeditor_link][version] = "2.3"

projects[menu_attributes][subdir] = "contrib"
projects[menu_attributes][version] = "1.0-rc3"

; ******************************************************
; Developpment modules
projects[devel][subdir] = "dev-tools"
projects[devel][version] = "1.5"

; ******************************************************
; Other modules
projects[captcha][subdir] = "contrib"
projects[captcha][version] = "1.1"

projects[context][subdir] = "contrib"

projects[eu-cookie-compliance][subdir] = "contrib"
projects[eu-cookie-compliance][version] = "1.12"

projects[imagecache_actions][subdir] = "contrib"
projects[imagecache_actions][version] = "1.4"

projects[jquery_update][subdir] = "contrib"
projects[jquery_update][version] = "2.4"

projects[references][subdir] = "contrib"
projects[references][version] = "2.1"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.2"

projects[recaptcha][subdir] = "contrib"
projects[recaptcha][version] = "1.11"

projects[sharethis][subdir] = "contrib"
projects[sharethis][version] = "2.9"

projects[site_map][subdir] = "contrib"
projects[site_map][version] = "1.2"

projects[social_media_links][subdir] = "contrib"
projects[social_media_links][version] = "1.3"

projects[special_menu_items][subdir] = "contrib"
projects[special_menu_items][version] = "2.0"

projects[token][subdir] = "contrib"
projects[token][version] = "1.5"

projects[transliteration][subdir] = "contrib"
projects[transliteration][version] = "3.2"

projects[uuid][subdir] = "contrib"
projects[uuid][version] = "1.0-alpha6"

projects[variable][subdir] = "contrib"
projects[variable][version] = "2.5"

projects[views][subdir] = "contrib"
projects[views][version] = "3.8"

projects[elysia_cron][subdir] = "contrib"
projects[elysia_cron][version] = "2.1"

projects[feeds][subdir] = "contrib"

projects[views_data_export][subdir] = "contrib"

projects[job_scheduler][subdir] = "contrib"

; ******************************************************
; Contrib custom (not used)

; projects[crumbs][subdir] = "contrib-custom"
; projects[crumbs][version] = "2.2"
; projects[image_combination_effects][subdir] = "contrib-custom"
; projects[image_combination_effects][version] = "1.0-alpha1"

; ******************************************************
; Themes
projects[bootstrap][version] = "3.0"

; ******************************************************
; Libraries
libraries[tika][download][type] = "get"
libraries[tika][type] = "libraries"
libraries[tika][download][url] = "http://archive.apache.org/dist/tika/tika-app-1.4.jar"

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.3.4/ckeditor_4.3.4_full.zip"
libraries[ckeditor][type] = "libraries"

