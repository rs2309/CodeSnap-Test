#include "api/controller.h"
#include "network/http_client.h"
#include "db/database.h"
void Controller::handleRequest(const std::string& route) {
    HttpClient client;
    Database db;
    auto res = client.get(route);
    db.query("INSERT INTO logs VALUES ('" + res + "')"); // ⚠ injection
}