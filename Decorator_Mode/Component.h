//
// Created by 13704 on 2022/10/24.
//

#ifndef DECORATOR_MODE_COMPONENT_H
#define DECORATOR_MODE_COMPONENT_H
#include <iostream>
/*-我们需要为英雄增加额外的功能或者属性，但是又不能影响Hero类，这个时候就可以考虑装饰器模式-*/
class AbstractHero {
public:
    virtual void showStatus() = 0;
    int mHp;
    int mMp;
    int mAt;
    int mDf;
};

class HeroA:public AbstractHero{
public:
    HeroA();
    virtual void showStatus();
};

#endif //DECORATOR_MODE_COMPONENT_H
