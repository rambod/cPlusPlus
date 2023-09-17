#include <iostream>
#include <curl/curl.h>
#include <string>

// Callback function to write HTTP response data to a string
size_t WriteCallback(void* contents, size_t size, size_t nmemb, std::string* output) {
    size_t total_size = size * nmemb;
    output->append(static_cast<char*>(contents), total_size);
    return total_size;
}

/**
 * Makes a request to the specified URL and retrieves the response data.
 *
 * @return 0 if the request is successful
 *
 * @throws ErrorType if the request fails
 */
int requestCall() {
    CURL *curl;
    CURLcode res;

    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://jsonplaceholder.typicode.com/users");

        // Response data will be stored in this string
        std::string response_data;

        // Set the write callback function to capture the response
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response_data);

        res = curl_easy_perform(curl);

        if (res != CURLE_OK) {
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
        } else {
            // Print the response data
            std::cout << "Response Data:" << std::endl;
            std::cout << response_data << std::endl;
        }

        curl_easy_cleanup(curl);
    }

    return 0;
}


// int requestCall() {
//     CURL *curl;
//     CURLcode res;

//     curl = curl_easy_init();
//     if (curl) {
//         curl_easy_setopt(curl, CURLOPT_URL, "https://jsonplaceholder.typicode.com/users");
//         res = curl_easy_perform(curl);
//         if (res != CURLE_OK) {
//             std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
//         }
//         curl_easy_cleanup(curl);
//     }

//     return 0;
// }
