#include <iostream>
#include "Product.h"
#include "Factory.h"
int main() {
    Factory *fac = new ConcreteFatory();
    Product *p = fac->CreateProduct();
    delete fac;
    delete p;
    return 0;
}
