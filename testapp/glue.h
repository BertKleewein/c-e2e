
#pragma once
#include <iostream>

using namespace std;

void Glue_AppComment(const char *comment);
void Glue_AppExit();
void Glue_DeviceConnect(const char *connectionString);
std::string Glue_DeviceGetTwin();
void Glue_ServiceConnect(const char *connectionString);
void Glue_ServiceUpdateTwin(const char *deviceId, const char *moduleId, const char *requestBody);
