//
// Created by 13704 on 2022/10/25.
//

#include "Proxy.h"

SystemProxy::SystemProxy(std::string username, std::string password)
:UserName(username),PassWord(password){
    system = new Operating_System;
}

bool SystemProxy::permissionValidation() {
    if(UserName=="admin" && PassWord=="admin"){
        return true;
    }
    return false;
}

void SystemProxy::run() {
    if(permissionValidation()){
        std::cout<<"权限正确！"<<std::endl;
        system->run();
    }else{
        std::cout<<"权限不足"<<std::endl;
    }
}

SystemProxy::~SystemProxy() {
    if(system!= nullptr)
        delete system;
}
