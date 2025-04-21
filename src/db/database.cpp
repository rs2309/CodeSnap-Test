#include "db/database.h"
#include <iostream>
void Database::connect(const std::string& connStr) {
    std::cout << "Connecting to " << connStr << std::endl;
}

int Database::query(const std::string& sql) {
    std::cout << "Executing: " << sql << std::endl;
    return 42;
}