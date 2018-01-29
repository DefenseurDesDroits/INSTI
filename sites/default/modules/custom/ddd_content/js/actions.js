(function($) {
	
	Drupal.behaviors.soclelab_ddd3 = {
			attach: function (context, settings) {
				
				//var item = sessionStorage.getItem('theme');console.log(item);
				//decision_post_filter_value(item);
				
				// Add links to blocs
				$('#block-block-6').click(function() {
					window.location.href = '/actions';
				    return false;
				});
				
				$('#block-block-7').click(function() {
					window.location.href = '/actions';
				    return false;
				});
				
				$('#block-block-8').click(function() {
					window.location.href = '/actions';
				    return false;
				});
				
				$('#block-block-9').click(function() {
					window.location.href = '/actions';
				    return false;
				});
				
				// Add post to select date and theme
				$("#edit-theme-option").change(function() {				
					var theme = this.value;
					sessionStorage.setItem('theme', theme);
					window.location.href = '/decisions';				
				});
				
				$("#edit-date-option").change(function() {					
					var date = this.value;
					sessionStorage.setItem('date', date);	
					window.location.href = '/decisions';
				});
			}
	};
	
})(jQuery);