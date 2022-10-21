//
// Created by 13704 on 2022/10/20.
//

#ifndef FACTORY_MODE_PRODUCT_H
#define FACTORY_MODE_PRODUCT_H


class Product {
public:
    virtual ~Product() = 0;
protected:
    Product();
private:
};

class ConcreteProduct:public Product{
public:
    ConcreteProduct();
    ~ConcreteProduct();
protected:
private:
};
#endif //FACTORY_MODE_PRODUCT_H
