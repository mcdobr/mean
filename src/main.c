#include <stdio.h>

#include <openssl/bio.h>
#include <openssl/err.h>
#include <openssl/ssl.h>

#include <curl/curl.h>

void init_ssl() {
    SSL_load_error_strings();
    SSL_library_init();
}

int main(int argc, char *argv[]) {
    char output_buffer[256] = {0};

    printf("Hello modern C!\n");
    
    CURL *curl = curl_easy_init();
    if (curl) {
        printf("CURL seems ok!\n");
    }
    
    return 0;
}
