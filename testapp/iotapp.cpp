#include <string>
#include <memory>
#include <cstdlib>
#include <fstream>
#include <restbed>
#include <streambuf>
#include <iostream>
#include "DefaultApi.h"

using namespace std;
using namespace restbed;
using namespace io::swagger::server::api;

int main( const int, const char** )
{
    auto api = make_shared< DefaultApi >( );
    api->startService(8081);
    return EXIT_SUCCESS;
}

