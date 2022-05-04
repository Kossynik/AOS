Action()
{

	lr_start_transaction("homePage");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_set_user("Kossy", 
		lr_unmask("626c093df3108c3b"), 
		"18.212.178.84:80");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=18.212.178.84");

	web_add_cookie("_ga=GA1.1.466099567.1651246184; DOMAIN=18.212.178.84");

	web_add_cookie("_gid=GA1.1.1345724349.1651246184; DOMAIN=18.212.178.84");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("18.212.178.84", 
		"URL=http://18.212.178.84/", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/vendor/requirejs/require.js", ENDITEM, 
		"Url=/main.min.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		"Url=/app/tempFiles/popularProducts.json", ENDITEM, 
		LAST);

	web_url("ALL", 
		"URL=http://18.212.178.84/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"content-type,soapaction");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"http://18.212.178.84");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=http://18.212.178.84:8081//accountservice/ws/GetAccountConfigurationRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_custom_request("GetAccountConfigurationRequest_2", 
		"URL=http://18.212.178.84:8081//accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_cookie("_gat=1; DOMAIN=18.212.178.84");

	web_revert_auto_header("Origin");

	web_url("categories", 
		"URL=http://18.212.178.84/catalog/api/v1/categories", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=http://18.212.178.84/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=http://18.212.178.84/app/views/home-page.html", 
		"Resource=0", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		LAST);

	lr_end_transaction("homePage",LR_AUTO);

	lr_think_time(35);

	lr_start_transaction("clickCreateAccount");

	web_url("register-page.html", 
		"URL=http://18.212.178.84/app/user/views/register-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"content-type,soapaction");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"http://18.212.178.84");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("GetCountriesRequest", 
		"URL=http://18.212.178.84:8081//accountservice/ws/GetCountriesRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://18.212.178.84/css/images/Bell.png", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		"Url=http://18.212.178.84/css/images/Check.png", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetCountriesRequest");

	web_custom_request("GetCountriesRequest_2", 
		"URL=http://18.212.178.84:8081//accountservice/ws/GetCountriesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("clickCreateAccount",LR_AUTO);

	lr_start_transaction("createAccount");

	web_add_header("Access-Control-Request-Headers", 
		"content-type,soapaction");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	lr_think_time(84);

	web_custom_request("AccountCreateRequest", 
		"URL=http://18.212.178.84:8081//accountservice/ws/AccountCreateRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountCreateRequest");

	web_custom_request("AccountCreateRequest_2", 
		"URL=http://18.212.178.84:8081//accountservice/ws/AccountCreateRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountCreateRequest xmlns=\"com.advantage.online.store.accountservice\"><accountType>USER</accountType><address>22 Yubileinay</address><allowOffersPromotion>false</allowOffersPromotion><cityName>Perm</cityName><countryId>Russia,ru</countryId><email>kossy@mail.ru</"
		"email><firstName>Kossy</firstName><lastName>Logic</lastName><loginName>Kossy</loginName><password>1Fas</password><phoneNumber>88990000</phoneNumber><stateProvince>region</stateProvince><zipcode>8888</zipcode></AccountCreateRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"content-type,soapaction");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("AccountLoginRequest", 
		"URL=http://18.212.178.84:8081//accountservice/ws/AccountLoginRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_custom_request("AccountLoginRequest_2", 
		"URL=http://18.212.178.84:8081//accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email>kossy@mail.ru</email><loginPassword>1Fas</loginPassword><loginUser>Kossy</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_revert_auto_header("Origin");

	web_url("642890638", 
		"URL=http://18.212.178.84/order/api/v1/carts/642890638", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("createAccount",LR_AUTO);

	return 0;
}