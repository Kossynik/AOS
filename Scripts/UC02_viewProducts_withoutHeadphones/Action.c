Action()
{

	lr_start_transaction("UC02_viewProducts_withoutHeadphones");
	
	lr_start_transaction("homePage");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("_ga=GA1.1.466099567.1651246184; DOMAIN=18.212.178.84");

	web_add_cookie("_gid=GA1.1.1345724349.1651246184; DOMAIN=18.212.178.84");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=18.212.178.84");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("18.212.178.84", 
		"URL=http://18.212.178.84/", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		"Url=/app/tempFiles/popularProducts.json", ENDITEM, 
		"Url=/css/images/category_banner_4.png", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4500", ENDITEM, 
		"Url=/css/images/category_banner_3.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3300", ENDITEM, 
		"Url=/css/images/category_banner_1.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1249", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1250", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=11100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1245", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=1800", ENDITEM, 
		"Url=/css/images/category_banner_5.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5400", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5800", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5505", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5700", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5600", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=5900", ENDITEM, 
		LAST);

	web_reg_find("Text/IC=The Advantage demo",
		LAST);
	
	web_url("ALL",
		"URL=http://18.212.178.84/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
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

	lr_think_time(10);

	lr_start_transaction("clickSpeakers");

	web_reg_find("Text/IC=SPEAKERS",
		LAST);

	web_url("products",
		"URL=http://18.212.178.84/catalog/api/v1/categories/4/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attributes", 
		"URL=http://18.212.178.84/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=http://18.212.178.84/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("clickSpeakers",LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("clickTablets");

	web_reg_find("Text/IC=TABLETS",
		LAST);

	web_url("products_2",
		"URL=http://18.212.178.84/catalog/api/v1/categories/3/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("clickTablets",LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("clickLaptops");

	web_reg_find("Text/IC=LAPTOPS",
		LAST);

	web_url("products_3",
		"URL=http://18.212.178.84/catalog/api/v1/categories/1/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("clickLaptops",LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("clickMice");

	web_reg_find("Text/IC=MICE",
		LAST);
	
	web_url("products_4",
		"URL=http://18.212.178.84/catalog/api/v1/categories/5/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("clickMice",LR_AUTO);
	
	lr_end_transaction("UC02_viewProducts_withoutHeadphones", LR_AUTO);

	return 0;
}