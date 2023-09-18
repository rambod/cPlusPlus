#ifndef DATAPROCESSOR_H
#define DATAPROCESSOR_H

#include <vector>
#include <set>
#include <string>

class DataProcessor {
public:
    // Constructor
    DataProcessor();

    // Member function to fetch data from an API, process it, and update sets and lists
    void fetchDataFromApi();

    // Member function to display the processed data
    void displayData();

private:
    // Arrays to store data
    std::vector<int> intArray_;
    std::vector<std::string> stringArray_;

    // Set to store unique strings
    std::set<std::string> stringSet_;

    // Helper function to convert JSON to a list
};

#endif
