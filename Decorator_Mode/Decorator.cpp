//
// Created by 13704 on 2022/10/24.
//

#include "Decorator.h"
#include "iostream"
AbstractEquipment::AbstractEquipment(AbstractHero *hero) {
    this->pHero = hero;
}

void AbstractEquipment::showStatus() {

}

Equipment_Hp::Equipment_Hp(AbstractHero *hero) : AbstractEquipment(hero) {

}

void Equipment_Hp::Add_Equipment_hp() {
    std::cout<<"人物穿上血量装后-"<<std::endl;
    this->mHp = this->pHero->mHp+30;
    this->mMp = this->pHero->mMp;
    this->mAt = this->pHero->mAt;
    this->mDf = this->pHero->mDf;
}

void Equipment_Hp::showStatus() {
    Add_Equipment_hp();
    std::cout<<"血量:"<<mHp<<std::endl;
    std::cout<<"蓝量:"<<mMp<<std::endl;
    std::cout<<"攻击:"<<mAt<<std::endl;
    std::cout<<"防御:"<<mDf<<std::endl;
}
