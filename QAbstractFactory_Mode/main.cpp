#include <iostream>
#include "Factory.h"
void testFun();
int main() {
    testFun();
    return 0;
}
void testFun(){
    AbstractFactory* factory = nullptr;
    AbstractApple* apple = nullptr;
    AbstractBanana* banana = nullptr;
    AbstractPear* pear = nullptr;

    //A国工厂
    factory = new AFactory;
    apple = factory->CreateApple();
    banana = factory->CreateBanana();
    pear = factory->CreatePear();

    apple->showName();
    banana->showName();
    pear->showName();
    /*-没有纯虚析构函数的声明和实现-*/
    delete factory;
    factory = nullptr;
    delete banana;
    banana = nullptr;
    delete pear;
    pear = nullptr;
    delete apple;
    apple = nullptr;
}

