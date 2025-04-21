#include "api/controller.h"

int main() {
    Controller ctrl;
    ctrl.handleRequest("/test");
    return 0;
}