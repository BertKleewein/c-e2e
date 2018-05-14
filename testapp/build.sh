
clang++ \
    -I ../deps/restbed/distribution/include \
    -L ../deps/restbed/distribution/library \
    -std=gnu++11 \
    -o example app.cpp -l restbed
