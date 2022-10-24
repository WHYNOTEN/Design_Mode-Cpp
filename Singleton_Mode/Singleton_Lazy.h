//
// Created by 13704 on 2022/10/24.
//

#ifndef SINGLETON_MODE_SINGLETON_LAZY_H
#define SINGLETON_MODE_SINGLETON_LAZY_H

/*------------------------version1.0---------------------------------*/
/*-该版本存在内存泄露问题，可以使用智能指针，或者采用静态的嵌套对象进行解决-*/
class Singleton_Lazy_v1 {
private:
    static Singleton_Lazy_v1* instance;
    Singleton_Lazy_v1();
    ~Singleton_Lazy_v1();
    Singleton_Lazy_v1(const Singleton_Lazy_v1&);
    Singleton_Lazy_v1& operator=(const Singleton_Lazy_v1&);
public:
    static Singleton_Lazy_v1* getInstance();
};

/*------------------------version1.1---------------------------------*/
/*-使用静态的嵌套对象解决v1的内存泄露问题-*/
class Singleton_Lazy_v1_1{
private:
    static Singleton_Lazy_v1_1* instance;
    Singleton_Lazy_v1_1();
    ~Singleton_Lazy_v1_1();
    Singleton_Lazy_v1_1(const Singleton_Lazy_v1_1&);
    Singleton_Lazy_v1_1& operator=(const Singleton_Lazy_v1_1&);
    class Deletor{
    public:
        ~Deletor();
    };
    static Deletor deletor;

public:
    static Singleton_Lazy_v1_1* getInstance();
};
/*----------------------version_best_of_all-----------------------------*/
/*-C++11后，最好的方式实现单例模式！-*/
class Singleton_best{
private:
    Singleton_best();
    ~Singleton_best();
    Singleton_best(const Singleton_best&);
    Singleton_best& operator=(const Singleton_best&);
public:
    static Singleton_best& getInstance();
};
#endif //SINGLETON_MODE_SINGLETON_LAZY_H
