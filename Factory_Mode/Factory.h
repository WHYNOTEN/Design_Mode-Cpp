//
// Created by 13704 on 2022/10/20.
//

#ifndef FACTORY_MODE_FACTORY_H
#define FACTORY_MODE_FACTORY_H

class Product;
class Factory {
public:
    virtual ~Factory();
    virtual Product *CreateProduct() = 0;
protected:
    Factory();

};

class ConcreteFatory:public Factory{
public:
    ConcreteFatory();
    ~ConcreteFatory();
    Product* CreateProduct();
};

#endif //FACTORY_MODE_FACTORY_H
