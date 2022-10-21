//
// Created by 13704 on 2022/10/21.
//

#ifndef QABSTRACTFACTORY_MODE_FACTORY_H
#define QABSTRACTFACTORY_MODE_FACTORY_H

#include "Product.h"
// 抽象工厂，针对产品族
class AbstractFactory {
public:
    virtual AbstractApple* CreateApple()=0;
    virtual AbstractBanana* CreateBanana()=0;
    virtual AbstractPear* CreatePear()=0;
};

class AFactory:public AbstractFactory{
public:
    virtual AbstractApple* CreateApple() ;
    virtual AbstractBanana* CreateBanana() ;
    virtual AbstractPear* CreatePear() ;
};

class BFactory:public AbstractFactory{
public:
    virtual AbstractApple* CreateApple();
    virtual AbstractBanana* CreateBanana();
    virtual AbstractPear* CreatePear();
};

class CFactory:public AbstractFactory{
public:
    virtual AbstractApple* CreateApple();
    virtual AbstractBanana* CreateBanana();
    virtual AbstractPear* CreatePear();
};
#endif //QABSTRACTFACTORY_MODE_FACTORY_H
