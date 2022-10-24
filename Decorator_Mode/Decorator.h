//
// Created by 13704 on 2022/10/24.
//

#ifndef DECORATOR_MODE_DECORATOR_H
#define DECORATOR_MODE_DECORATOR_H
#include "Component.h"
//英雄穿上某个装饰物，那么也还是一个英雄
class  AbstractEquipment:public AbstractHero{
public:
    AbstractEquipment(AbstractHero *hero);
    virtual void showStatus();
    AbstractHero *pHero;
};
//hero穿戴上具体装饰物，属性发生改变，但还是个hero
class Equipment_Hp:public AbstractEquipment{
public:
    Equipment_Hp(AbstractHero *hero);
    void Add_Equipment_hp();
    virtual void showStatus();
};

#endif //DECORATOR_MODE_DECORATOR_H
