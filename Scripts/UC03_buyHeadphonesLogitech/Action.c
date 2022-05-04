Action()
{

	lr_start_transaction("UC03_buyHeadphonesLogitech");
	
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
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		"Url=/app/tempFiles/popularProducts.json", ENDITEM, 
		"Url=/css/images/category_banner_2.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2100", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=2400", ENDITEM, 
		"Url=/css/images/User.jpg", ENDITEM, 
		"Url=/css/images/Shipex.png", ENDITEM, 
		LAST);

	web_reg_find("Text/IC=The Advantage demo",
		LAST);
	
	web_url("ALL",
		"URL=http://18.212.178.84/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t29.inf", 
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
		"Snapshot=t30.inf", 
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
		"Snapshot=t31.inf", 
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
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=http://18.212.178.84/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=http://18.212.178.84/app/views/home-page.html", 
		"Resource=0", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=http://18.212.178.84/css/main.min.css", ENDITEM, 
		LAST);

	lr_end_transaction("homePage",LR_AUTO);

	lr_start_transaction("login");

	web_add_header("Access-Control-Request-Headers", 
		"content-type,soapaction");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"http://18.212.178.84");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	lr_think_time(10);

	web_custom_request("AccountLoginRequest", 
		"URL=http://18.212.178.84:8081//accountservice/ws/AccountLoginRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLoginRequest");

	web_reg_find("Text/IC=Login Successful",
		LAST);

	web_reg_save_param("userId",
		"LB/IC=<ns2:userId>",
		"RB/IC=<",
		LAST);
	
	web_reg_save_param("authorization",
		"LB/IC=<ns2:t_authorization>",
		"RB/IC=<",
		LAST);
	
	web_custom_request("AccountLoginRequest_2",
		"URL=http://18.212.178.84:8081//accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>1Fas1</loginPassword><loginUser>Garret231</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_revert_auto_header("Origin");
	
	web_add_header("Authorization",
		"Basic {authorization}");
	
	web_reg_save_param("sessionId",
		"LB/IC=\"sessionId\":\"",
		"RB/IC=\"",
		LAST);

	web_url("{userId}", 
		"URL=http://18.212.178.84/order/api/v1/carts/{userId}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("login",LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("clickHeadphones");

	web_reg_find("Text/IC=HEADPHONES",
		LAST);
	
	web_url("products",
		"URL=http://18.212.178.84/catalog/api/v1/categories/2/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attributes", 
		"URL=http://18.212.178.84/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=http://18.212.178.84/app/views/category-page.html", 
		"Resource=0", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("clickHeadphones",LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("clickLogitechHeadphones");

	web_reg_find("Text/IC=Logitech USB Headset H390",
		LAST);
	
	web_url("14",
		"URL=http://18.212.178.84/catalog/api/v1/products/14", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all_data", 
		"URL=http://18.212.178.84/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products_2", 
		"URL=http://18.212.178.84/catalog/api/v1/categories/2/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=http://18.212.178.84/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_url("MostPopularComments", 
		"URL=http://18.212.178.84/catalog/api/v1/MostPopularComments", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		LAST);
	
	lr_end_transaction("clickLogitechHeadphones",LR_AUTO);

	lr_start_transaction("clickAddToCart");

	web_add_header("Origin", 
		"http://18.212.178.84");

	lr_think_time(10);

	web_reg_find("Text/IC=productsInCart",
		LAST);
	
	web_add_header("Authorization",
		"Basic {authorization}");

	web_submit_data("414141",
		"Action=http://18.212.178.84/order/api/v1/carts/{userId}/product/14/color/414141?quantity=1", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sessionId", "Value={sessionId}", ENDITEM, 
		LAST);

	lr_end_transaction("clickAddToCart",LR_AUTO);

	lr_think_time(10);

	lr_start_transaction("clickCart");

	web_add_header("Authorization",
		"Basic {authorization}");
	
	web_url("{userId}_2",
		"URL=http://18.212.178.84/order/api/v1/carts/{userId}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Text/IC=SHOPPING_CART",
		LAST);

	web_url("shoppingCart.html",
		"URL=http://18.212.178.84/app/views/shoppingCart.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("clickCart",LR_AUTO);

	lr_start_transaction("checkout");

	web_add_header("Access-Control-Request-Headers", 
		"content-type,soapaction");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"http://18.212.178.84");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	lr_think_time(10);

	web_custom_request("GetAccountByIdRequest", 
		"URL=http://18.212.178.84:8081//accountservice/ws/GetAccountByIdRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdRequest");

	web_custom_request("GetAccountByIdRequest_2", 
		"URL=http://18.212.178.84:8081//accountservice/ws/GetAccountByIdRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{userId}</accountId><base64Token>Basic {authorization}</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"content-type,soapaction");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("GetAccountByIdNewRequest", 
		"URL=http://18.212.178.84:8081//accountservice/ws/GetAccountByIdNewRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountByIdNewRequest");

	web_custom_request("GetAccountByIdNewRequest_2", 
		"URL=http://18.212.178.84:8081//accountservice/ws/GetAccountByIdNewRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{userId}</accountId><base64Token>Basic {authorization}</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_add_header("Authorization",
		"Basic {authorization}");
	
	web_url("{userId}_3",
		"URL=http://18.212.178.84/order/api/v1/carts/{userId}", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://18.212.178.84");

	web_custom_request("shippingcost", 
		"URL=http://18.212.178.84/order/api/v1/shippingcost/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"seaddress\":{\"addressLine1\":\"{address}\",\"addressLine2\":\"\",\"city\":\"{cityName}\",\"country\":\"dk\",\"postalCode\":\"{zipcode}\",\"state\":\"{stateProvince}\"},\"secustomerName\":\"{firstName} {lastName}\",\"secustomerPhone\":{phoneNumber},\"senumberOfProducts\":1,\"setransactionType\":\"SHIPPING_COST\",\"sessionId\":\"{sessionId}\"}", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"content-type,soapaction");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_custom_request("GetAccountPaymentPreferencesRequest", 
		"URL=http://18.212.178.84:8081//accountservice/ws/GetAccountPaymentPreferencesRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountPaymentPreferencesRequest");

	web_custom_request("GetAccountPaymentPreferencesRequest_2", 
		"URL=http://18.212.178.84:8081//accountservice/ws/GetAccountPaymentPreferencesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>{userId}</accountId><base64Token>Basic {authorization}</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_revert_auto_header("Origin");

	web_reg_find("Text/IC=ORDER_PAYMENT",
		LAST);

	web_url("orderPayment-page.html",
		"URL=http://18.212.178.84/app/order/views/orderPayment-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t57.inf", 
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
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetCountriesRequest");

	web_custom_request("GetCountriesRequest_2", 
		"URL=http://18.212.178.84:8081//accountservice/ws/GetCountriesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("checkout",LR_AUTO);

	lr_start_transaction("paymentDetails");

	web_add_header("Access-Control-Request-Headers", 
		"content-type,soapaction");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	lr_think_time(10);

	web_custom_request("AddSafePayMethodRequest", 
		"URL=http://18.212.178.84:8081//accountservice/ws/AddSafePayMethodRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAddSafePayMethodRequest");

	web_custom_request("AddSafePayMethodRequest_2", 
		"URL=http://18.212.178.84:8081//accountservice/ws/AddSafePayMethodRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AddSafePayMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><safePayUsername>{safePayLogin}</safePayUsername><accountId>{userId}</accountId><safePayPassword>{safePayPassword}</safePayPassword><base64Token>Basic {authorization}</base64Token></AddSafePayMethodRequest"
		"></soap:Body></soap:Envelope>", 
		LAST);

	web_reg_find("Text/IC=order completed successfully",
		LAST);

	web_add_header("Authorization",
		"Basic {authorization}");
	
	web_custom_request("{userId}_4",
		"URL=http://18.212.178.84/order/api/v1/orders/users/{userId}", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"843200971\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":450001,\"Transaction_MasterCredit_CVVNumber\":\"\",\"Transaction_MasterCredit_CardNumber\":\"4886\",\"Transaction_MasterCredit_CustomerName\":\"\",\"Transaction_MasterCredit_ExpirationDate\":\"122027\",\"Transaction_PaymentMethod\":\"SafePay\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"1Jkl2\",\"Transaction_SafePay_UserName\":\""
		"Garret1\",\"Transaction_TransactionDate\":\"29042022\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"Velgarde 2501\",\"Shipping_Address_City\":\"Alborg\",\"Shipping_Address_CountryCode\":82,\"Shipping_Address_CustomerName\":\"Garret Mitchel\",\"Shipping_Address_CustomerPhone\":450001,\"Shipping_Address_PostalCode\":\"0929\",\"Shipping_Address_State\":\"region\",\"Shipping_Cost\":39.99,\"Shipping_NumberOfProducts\":1,\"Shipping_TrackingNumber\":0},\""
		"purchasedProducts\":[{\"hexColor\":\"414141\",\"productId\":14,\"quantity\":1,\"hasWarranty\":false}]}", 
		LAST);

	web_add_header("Authorization",
		"Basic {authorization}");
	
	web_custom_request("{userId}_5",
		"URL=http://18.212.178.84/order/api/v1/carts/{userId}", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t63.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("paymentDetails",LR_AUTO);

	lr_start_transaction("logout");

	web_add_header("Access-Control-Request-Headers", 
		"content-type,soapaction");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	lr_think_time(10);

	web_custom_request("AccountLogoutRequest", 
		"URL=http://18.212.178.84:8081//accountservice/ws/AccountLogoutRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t64.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceAccountLogoutRequest");

	web_reg_find("Text/IC=Logout Successful",
		LAST);

	web_custom_request("AccountLogoutRequest_2",
		"URL=http://18.212.178.84:8081//accountservice/ws/AccountLogoutRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://18.212.178.84/", 
		"Snapshot=t65.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLogoutRequest xmlns=\"com.advantage.online.store.accountservice\"><loginUser>{userId}</loginUser><base64Token>Basic {authorization}</base64Token></AccountLogoutRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_end_transaction("logout",LR_AUTO);
	
	lr_end_transaction("UC03_buyHeadphonesLogitech", LR_AUTO);

	return 0;
}