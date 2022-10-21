//
// Created by 13704 on 2022/10/21.
//

#ifndef QABSTRACTFACTORY_MODE_PRODUCT_H
#define QABSTRACTFACTORY_MODE_PRODUCT_H
/**********************************************************************************/
/*-苹果类-*/
class AbstractApple{
public:
    virtual void showName() = 0;
};

/*-C国苹果-*/
class CApple: public AbstractApple{
public:
    void showName() override;
};

/*-A国苹果-*/
class AApple: public AbstractApple{
public:
    virtual void showName();
};
 /*-B国苹果-*/
 class BApple:public AbstractApple{
 public:
     virtual void showName();
 };
 /********************************************************************************************/
 class AbstractBanana{
 public:
     virtual void showName() = 0;
 };
class ABanana:public AbstractBanana{
public:
    virtual void showName();
};
class BBanana:public AbstractBanana{
public:
    virtual void showName();
};
class CBanana:public AbstractBanana{
public:
    virtual void showName();
};
//鸭梨的抽象
class AbstractPear {
public:
    virtual void showName() = 0;
};

class CPear :public AbstractPear {
public:
    virtual void showName();
};

class APear :public AbstractPear {
public:
    virtual void showName();
};

class BPear :public AbstractPear {
public:
    virtual void showName();
};
#endif //QABSTRACTFACTORY_MODE_PRODUCT_H
