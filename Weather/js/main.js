/*function selectID() {
    var opt = document.getElementById("city").selectedIndex;
    console.log(opt)
    var val = document.getElementsByTagName("option")[opt].value
    alert(val);
}*/


	document.getElementById("city").addEventListener("change", function () {
		
	var API_URL = "http://api.openweathermap.org/data/2.5/weather?id=";
	var key = "a8af1cdd0f3b549170961d8985b7b05e";
	
	//var opt = document.getElementById("city").selectedIndex;
	//var val = document.getElementsByTagName("option")[opt].value;
	//console.log(val);
					
	if (city.value.length === 0) {
		return;
	} 
	else {
		var uri = API_URL + city.value + "&appid=" + key;
		//console.log(uri);

	var XHR = new XMLHttpRequest(); //відкриття порталу
		XHR.open("GET", uri, true); //true - асинхронно
		XHR.send();// послати запрос 

		XHR.onreadystatechange = function () {
	
	if ((XHR.readyState === 4)&&(XHR.status === 200)) {
		console.log(XHR.responseText);


	var data = JSON.parse(XHR.responseText);
		main.innerHTML = "<h1>(data.main.humidity)</h1>";

			}
		}
	}
}, false);


