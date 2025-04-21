#pragma once
#include <string>
class Database {
public:
    void connect(const std::string& connStr);
    int query(const std::string& sql);
};