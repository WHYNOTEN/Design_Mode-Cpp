//
// Created by 13704 on 2022/10/20.
//

#include "Factory.h"
#include "iostream"
#include "Product.h"
Factory::Factory() {

}

Factory::~Factory() {

}

ConcreteFatory::ConcreteFatory() {
    std::cout<<"ConcreteFactory...."<<std::endl;
}

Product *ConcreteFatory::CreateProduct() {
    return new ConcreteProduct();
}

ConcreteFatory::~ConcreteFatory() {

}
