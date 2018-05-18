
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
    -L ../deps/azure-iot-sdk-c/cmake/iotsdk_linux/uamqp \
    -L ../deps/azure-iot-sdk-c/cmake/iotsdk_linux \
    -std=gnu++11 \
    -o example iotapp.cpp DefaultApi.cpp \
    -l restbed \
    -l iothub_service_client \
    -l iothub_client_amqp_transport \
    -l iothub_client \
    -l uamqp \
    -l aziotsharedutil \
    -l parson \
    -l curl -l uuid -l ssl -l crypto -l pthread


    # -D_GLIBCXX_DEBUG \
