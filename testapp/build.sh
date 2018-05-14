
clang++ \
    -I ../deps/restbed/distribution/include \
    -L ../deps/restbed/distribution/library \
    -std=gnu++11 \
    -o example iotapp.cpp DefaultApi.cpp \
    -l restbed -l crypto -l pthread 
