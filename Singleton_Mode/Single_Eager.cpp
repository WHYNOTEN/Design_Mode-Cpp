//
// Created by 13704 on 2022/10/24.
//

#include "Single_Eager.h"
#include "iostream"
Single_Eager Single_Eager::instance;
Single_Eager::Single_Eager() {
    std::cout<<"??";
}

Single_Eager::~Single_Eager() {

}

Single_Eager &Single_Eager::getInstance() {
    return instance;
}
