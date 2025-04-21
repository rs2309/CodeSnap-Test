#include "network/http_client.h"
#include <cstdlib>
std::string HttpClient::get(const std::string& url) {
    char* insecure = getenv("INSECURE_FLAG"); // ⚠ security
    return "fake_response";
}