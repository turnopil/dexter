/*function selectID() {
    var opt = document.getElementById("city").selectedIndex;
    console.log(opt)
    var val = document.getElementsByTagName("option")[opt].value
    alert(val);
}*/
function token(){
	var API_URL = "http://api.openweathermap.org/data/2.5/weather?id=";
	var key = "a8af1cdd0f3b549170961d8985b7b05e";
	var opt = document.getElementById("city").selectedIndex;
	var val = document.getElementsByTagName("option")[opt].value

	if (val===0) {
		return;
	} 
	else {

		var uri = API_URL + val + "&appid" + key;
		console.log(uri) 
	}
}
