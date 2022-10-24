//
// Created by 13704 on 2022/10/24.
//
#include <iostream>
#include "Singleton_Lazy.h"
#include "fstream"
/*------------------------version1.0---------------------------------*/
Singleton_Lazy_v1* Singleton_Lazy_v1::instance = nullptr;
Singleton_Lazy_v1::Singleton_Lazy_v1() {

}
Singleton_Lazy_v1::~Singleton_Lazy_v1() {

}
Singleton_Lazy_v1 *Singleton_Lazy_v1::getInstance() {
    if(instance== nullptr){
        instance = new Singleton_Lazy_v1();
    }
    return instance;
}
/*------------------------version1.1---------------------------------*/
Singleton_Lazy_v1_1* Singleton_Lazy_v1_1::instance = nullptr;
Singleton_Lazy_v1_1::Singleton_Lazy_v1_1() {

}

Singleton_Lazy_v1_1::~Singleton_Lazy_v1_1() {

}

Singleton_Lazy_v1_1 *Singleton_Lazy_v1_1::getInstance() {
    if(instance== nullptr){
        instance = new Singleton_Lazy_v1_1();
    }
    return instance;
}

Singleton_Lazy_v1_1::Deletor::~Deletor() {
    if(Singleton_Lazy_v1_1::instance!= nullptr){
        delete Singleton_Lazy_v1_1::instance;
    }
}
/*----------------------version_best_of_all-----------------------------*/
Singleton_best::Singleton_best() {

}

Singleton_best::~Singleton_best() {

}

Singleton_best &Singleton_best::getInstance() {
    static Singleton_best instance;
    return instance;
}
