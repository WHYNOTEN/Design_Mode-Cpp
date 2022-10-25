#include <iostream>
#include "Proxy.h"
int main() {
    SystemProxy* proxy = new SystemProxy("admin","admin");
    proxy->run();
    delete proxy;
    return 0;
}
