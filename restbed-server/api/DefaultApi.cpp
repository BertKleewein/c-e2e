/**
 * Service API
 * POC for service API
 *
 * OpenAPI spec version: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.1.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include <corvusoft/restbed/byte.hpp>
#include <corvusoft/restbed/string.hpp>
#include <corvusoft/restbed/settings.hpp>
#include <corvusoft/restbed/request.hpp>

#include "DefaultApi.h"

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

DefaultApi::DefaultApi() {
	std::shared_ptr<DefaultApiDeviceConnectResource> spDefaultApiDeviceConnectResource = std::make_shared<DefaultApiDeviceConnectResource>();
	this->publish(spDefaultApiDeviceConnectResource);
	
	std::shared_ptr<DefaultApiDeviceTwinResource> spDefaultApiDeviceTwinResource = std::make_shared<DefaultApiDeviceTwinResource>();
	this->publish(spDefaultApiDeviceTwinResource);
	
	std::shared_ptr<DefaultApiServiceConnectResource> spDefaultApiServiceConnectResource = std::make_shared<DefaultApiServiceConnectResource>();
	this->publish(spDefaultApiServiceConnectResource);
	
	std::shared_ptr<DefaultApiServiceDeviceIdModuleIdTwinResource> spDefaultApiServiceDeviceIdModuleIdTwinResource = std::make_shared<DefaultApiServiceDeviceIdModuleIdTwinResource>();
	this->publish(spDefaultApiServiceDeviceIdModuleIdTwinResource);
	
}

DefaultApi::~DefaultApi() {}

void DefaultApi::startService(int const& port) {
	std::shared_ptr<restbed::Settings> settings = std::make_shared<restbed::Settings>();
	settings->set_port(port);
	settings->set_root("");
	
	this->start(settings);
}

void DefaultApi::stopService() {
	this->stop();
}

DefaultApiDeviceConnectResource::DefaultApiDeviceConnectResource()
{
	this->set_path("/device/connect/");
	this->set_method_handler("PUT",
		std::bind(&DefaultApiDeviceConnectResource::PUT_method_handler, this,
			std::placeholders::_1));
}

DefaultApiDeviceConnectResource::~DefaultApiDeviceConnectResource()
{
}

void DefaultApiDeviceConnectResource::PUT_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			
			// Getting the query params
			const std::string connectionString = request->get_query_parameter("connectionString", "");

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "OK", { {"Connection", "close"} });
				return;
			}

}



DefaultApiDeviceTwinResource::DefaultApiDeviceTwinResource()
{
	this->set_path("/device/twin/");
	this->set_method_handler("GET",
		std::bind(&DefaultApiDeviceTwinResource::GET_method_handler, this,
			std::placeholders::_1));
}

DefaultApiDeviceTwinResource::~DefaultApiDeviceTwinResource()
{
}

void DefaultApiDeviceTwinResource::GET_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "OK", { {"Connection", "close"} });
				return;
			}

}



DefaultApiServiceConnectResource::DefaultApiServiceConnectResource()
{
	this->set_path("/service/connect/");
	this->set_method_handler("PUT",
		std::bind(&DefaultApiServiceConnectResource::PUT_method_handler, this,
			std::placeholders::_1));
}

DefaultApiServiceConnectResource::~DefaultApiServiceConnectResource()
{
}

void DefaultApiServiceConnectResource::PUT_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
			
			
			// Getting the query params
			const std::string connectionString = request->get_query_parameter("connectionString", "");

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "OK", { {"Connection", "close"} });
				return;
			}

}



DefaultApiServiceDeviceIdModuleIdTwinResource::DefaultApiServiceDeviceIdModuleIdTwinResource()
{
	this->set_path("/service/{deviceId: .*}/{moduleId: .*}/twin/");
	this->set_method_handler("PUT",
		std::bind(&DefaultApiServiceDeviceIdModuleIdTwinResource::PUT_method_handler, this,
			std::placeholders::_1));
}

DefaultApiServiceDeviceIdModuleIdTwinResource::~DefaultApiServiceDeviceIdModuleIdTwinResource()
{
}

void DefaultApiServiceDeviceIdModuleIdTwinResource::PUT_method_handler(const std::shared_ptr<restbed::Session> session) {

	const auto request = session->get_request();
	// Body params are present, therefore we have to fetch them
	int content_length = request->get_header("Content-Length", 0);
	session->fetch(content_length,
		[ this ]( const std::shared_ptr<restbed::Session> session, const restbed::Bytes & body )
		{

			const auto request = session->get_request();
			std::string requestBody = restbed::String::format("%.*s\n", ( int ) body.size( ), body.data( ));
			/**
			 * Get body params or form params here from the requestBody string
			 */
			
			// Getting the path params
			const std::string deviceId = request->get_path_parameter("deviceId", "");
			const std::string moduleId = request->get_path_parameter("moduleId", "");
			

			
			// Change the value of this variable to the appropriate response before sending the response
			int status_code = 200;
			
			/**
			 * Process the received information here
			 */
			
			if (status_code == 200) {
				session->close(200, "OK", { {"Connection", "close"} });
				return;
			}

		});
}




}
}
}
}
