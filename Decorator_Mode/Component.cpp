//
// Created by 13704 on 2022/10/24.
//

#include "Component.h"

HeroA::HeroA() {
    this->mMp = 0;
    this->mAt = 0;
    this->mDf = 0;
    this->mHp = 0;
}

void HeroA::showStatus() {
    std::cout<<"血量:"<<mHp<<std::endl;
    std::cout<<"蓝量:"<<mMp<<std::endl;
    std::cout<<"攻击:"<<mAt<<std::endl;
    std::cout<<"防御:"<<mDf<<std::endl;
}
