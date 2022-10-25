//
// Created by 13704 on 2022/10/25.
//

#ifndef PROXY_MODE_PROXY_H
#define PROXY_MODE_PROXY_H
#include "Operating_System.h"
#include <iostream>

/*-代理： 启动系统必须要权限验证,不是所以的人都可以来启动我的系统,必须要提供用户名和密码-*/
class SystemProxy: public AbstractCommonInterface{
public:
    SystemProxy(std::string username,std::string password);
    bool permissionValidation();
    virtual void run();
    ~SystemProxy();
private:
    std::string UserName;
    std::string PassWord;
    Operating_System *system;
};


#endif //PROXY_MODE_PROXY_H
