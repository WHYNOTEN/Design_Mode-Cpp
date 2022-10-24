#include <iostream>
#include "Component.h"
#include "Decorator.h"
int main() {
    AbstractHero *hero = new HeroA;
    hero->showStatus();
    std::cout<<"--------------------------------"<<std::endl;
    //穿上装备(添加装饰器)
    hero = new Equipment_Hp(hero);
    hero->showStatus();
    return 0;
}
