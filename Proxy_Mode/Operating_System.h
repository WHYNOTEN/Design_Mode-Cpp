//
// Created by 13704 on 2022/10/25.
//

#ifndef PROXY_MODE_OPERATING_SYSTEM_H
#define PROXY_MODE_OPERATING_SYSTEM_H

class AbstractCommonInterface{
public:
    virtual void run()=0;
};

class Operating_System :public AbstractCommonInterface{
public:
    virtual void run();
};


#endif //PROXY_MODE_OPERATING_SYSTEM_H
