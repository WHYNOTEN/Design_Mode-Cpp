//
// Created by 13704 on 2022/10/20.
//

#include "Product.h"
#include "iostream"
/*----Product----------*/
Product::Product() {

}
Product::~Product() {}
/*-------------ConcreteProduct--------*/
ConcreteProduct::ConcreteProduct() {
    std::cout<<"ConcreteProduct...."<<std::endl;
}
ConcreteProduct::~ConcreteProduct(){

}