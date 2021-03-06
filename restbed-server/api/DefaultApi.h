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

/*
 * DefaultApi.h
 *
 * 
 */

#ifndef DefaultApi_H_
#define DefaultApi_H_


#include <memory>
#include <corvusoft/restbed/session.hpp>
#include <corvusoft/restbed/resource.hpp>
#include <corvusoft/restbed/service.hpp>

#include "Object.h"
#include <string>

namespace io {
namespace swagger {
namespace server {
namespace api {

using namespace io::swagger::server::model;

class  DefaultApi: public restbed::Service
{
public:
	DefaultApi();
	~DefaultApi();
	void startService(int const& port);
	void stopService();
};


/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  DefaultApiDeviceConnectResource: public restbed::Resource
{
public:
	DefaultApiDeviceConnectResource();
    virtual ~DefaultApiDeviceConnectResource();
    void PUT_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  DefaultApiDeviceTwinResource: public restbed::Resource
{
public:
	DefaultApiDeviceTwinResource();
    virtual ~DefaultApiDeviceTwinResource();
    void GET_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// connect to service
/// </summary>
/// <remarks>
/// connect to the service
/// </remarks>
class  DefaultApiServiceConnectResource: public restbed::Resource
{
public:
	DefaultApiServiceConnectResource();
    virtual ~DefaultApiServiceConnectResource();
    void PUT_method_handler(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// 
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  DefaultApiServiceDeviceIdModuleIdTwinResource: public restbed::Resource
{
public:
	DefaultApiServiceDeviceIdModuleIdTwinResource();
    virtual ~DefaultApiServiceDeviceIdModuleIdTwinResource();
    void PUT_method_handler(const std::shared_ptr<restbed::Session> session);
};


}
}
}
}

#endif /* DefaultApi_H_ */

