
#include "iothub_client.h"
#include "iothub_registrymanager.h"
#include "iothub_devicetwin.h"
#include "iothubtransportamqp.h"
#include "azure_c_shared_utility/platform.h"

IOTHUB_SERVICE_CLIENT_AUTH_HANDLE iotHubServiceClientHandle = NULL;
IOTHUB_SERVICE_CLIENT_DEVICE_TWIN_HANDLE serviceTwinHandle = NULL;
IOTHUB_CLIENT_TRANSPORT_PROVIDER protocol = AMQP_Protocol;
IOTHUB_CLIENT_HANDLE iotHubClientHandle = NULL;

#include "glue.h"
#include <string>

void Glue_AppComment(const char *comment) {
  cout << "/*\n" << comment << "\n*/\n";
}

void Glue_AppExit() {
  cout << "app_exit();\n";
}

string currentTwin = "";
static void deviceTwinCallback(DEVICE_TWIN_UPDATE_STATE update_state, const unsigned char* payLoad, size_t size, void* userContextCallback) {
    (void)userContextCallback;

    currentTwin = string((const char*)payLoad, size);

    cout << "received twin update" << endl;
    cout << currentTwin << endl;
    cout << ENUM_TO_STRING(DEVICE_TWIN_UPDATE_STATE, update_state) << endl;
}


void Glue_DeviceConnect(const char *connectionString) {

  platform_init();

  cout << "device_connect(\"" << connectionString << "\")\n";

  if ((iotHubClientHandle = IoTHubClient_CreateFromConnectionString(connectionString, protocol)) == NULL) {
      cout << "// ERROR: iotHubClientHandle is NULL!" << endl;
  } else {
      cout << "// iotHubClientHandle = " << iotHubClientHandle << endl;
  }

  (void)IoTHubClient_SetDeviceTwinCallback(iotHubClientHandle, deviceTwinCallback, iotHubClientHandle);

}

std::string Glue_DeviceGetTwin() {
  return currentTwin;
}


void Glue_ServiceConnect(const char *connectionString) {
  iotHubServiceClientHandle = IoTHubServiceClientAuth_CreateFromConnectionString(connectionString);
  serviceTwinHandle = IoTHubDeviceTwin_Create(iotHubServiceClientHandle);
  cout << "IOTHUB_SERVICE_CLIENT_AUTH_HANDLE iotHubServiceClientHandle = IoTHubServiceClientAuth_CreateFromConnectionString(\"" << connectionString << "\");" << endl;
  cout << "// iotHubServiceClientHandle = " << iotHubServiceClientHandle << endl << endl;
  cout << "// serviceTwinHandle = " << serviceTwinHandle << endl << endl;
}

void Glue_ServiceUpdateTwin(const char *deviceId, const char *moduleId, const char *requestBody) {
  char* updatedDeviceTwinJson = IoTHubDeviceTwin_UpdateModuleTwin(serviceTwinHandle, deviceId, moduleId, requestBody);
  cout << "const char* body = \"" << requestBody << "\");" << endl;
  cout << "char* updatedDeviceTwinJson = IoTHubDeviceTwin_UpdateModuleTwin(serviceTwinHandle, \"" << deviceId << "\",\"" << moduleId << "\", body);" << endl;
  cout << "//  updateDeviceTwinJson = \"" << updatedDeviceTwinJson << "\"" << endl;
}

