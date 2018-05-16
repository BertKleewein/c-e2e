
g++ \
    --debug \
    -g \
    -I ../deps/restbed/distribution/include \
    -I ../deps/azure-iot-sdk-c/iothub_client/inc \
    -I ../deps/azure-iot-sdk-c/iothub_service_client/inc \
    -I ../deps/azure-iot-sdk-c/c-utility/inc \
    -L ../deps/restbed/distribution/library \
    -L ../deps/azure-iot-sdk-c/cmake/iotsdk_linux/iothub_service_client \
    -L ../deps/azure-iot-sdk-c/cmake/iotsdk_linux/iothub_client \
    -L ../deps/azure-iot-sdk-c/cmake/iotsdk_linux/c-utility \
    -std=gnu++11 \
    -o example iotapp.cpp DefaultApi.cpp \
    -l restbed -l crypto -l pthread  \
    -l iothub_service_client \
    -l aziotsharedutil

    # -D_GLIBCXX_DEBUG \
