jQuery( document ).ready(
function(){
	function decision_active_onglet() {
		var reg = new RegExp(/(\/decisionsdate|\/decisions|\/reglementdate|\/reglement)\/?(\d*)\/?(\d*)/);
		var filter = reg.exec(window.location.pathname);
		if(filter) {
			var link = filter[1];
			if(filter[2] && ! /\/decisionsdate/.test(filter[1])) {
				link += '/' + filter[2];
			}
			var debug = jQuery("a[href='" + link + "']").parent().parent().parent().addClass('actif');
			if(filter[3])
				jQuery("a[href='" + filter.input + "']").attr('disabled', true);
		}
	}

	function decision_date_disable() {
		var reg = new RegExp(/\/decisionsdate|\/reglementdate/);
		var filter = reg.exec(window.location.pathname);
		if(filter) {
			jQuery("a[href='" + filter.input + "']").attr('disabled', true);
		}
	}

	decision_active_onglet();
	decision_date_disable();
});