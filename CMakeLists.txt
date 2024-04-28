CMAKE_MINIMUM_REQUIRED(VERSION 3.21)

# Create project and mark it as C only
PROJECT(mean C)

find_package(OpenSSL REQUIRED)
find_package(CURL REQUIRED)

# Create executable
add_executable(mean src/main.c)

# Add linked libraries
target_link_libraries(mean openssl::openssl)
target_link_libraries(mean CURL::libcurl)

#set_property(TARGET tgt PROPERTY C_STANDARD 23)
