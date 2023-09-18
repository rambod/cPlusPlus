#include "dataprocessor.h"
#include <iostream>
#include <curl/curl.h>


// Constructor implementation
DataProcessor::DataProcessor() {
    // Initialize arrays and set with some data
    intArray_ = {1, 2, 3, 4, 5};
    stringArray_ = {"apple", "banana", "cherry", "date"};
    stringSet_ = {"apple", "banana", "cherry", "date"};
}



// Member function to fetch data from an API, process it, and update sets and lists
void DataProcessor::fetchDataFromApi() {
    // Simulate an API call using libcurl
    CURL *curl;
    CURLcode res;
    std::string apiResponse;

    curl_global_init(CURL_GLOBAL_DEFAULT);
    curl = curl_easy_init();
    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://jsonplaceholder.typicode.com/todos/1");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, [](void* buffer, size_t size, size_t count, void* data) {
            static_cast<std::string*>(data)->append(static_cast<char*>(buffer), size * count);
            return size * count;
        });
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &apiResponse);
        res = curl_easy_perform(curl);

        if (res != CURLE_OK) {
            std::cerr << "API request failed: " << curl_easy_strerror(res) << std::endl;
        }

        curl_easy_cleanup(curl);
    }

    curl_global_cleanup();

    // Parse JSON response

    // Convert JSON data to a list of strings

    // Insert some elements from the API list into the set
}

// Member function to display the processed data
void DataProcessor::displayData() {
    std::cout << "IntArray: ";
    for (const auto& num : intArray_) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    std::cout << "StringArray: ";
    for (const auto& str : stringArray_) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    std::cout << "StringSet: ";
    for (const auto& str : stringSet_) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
}
