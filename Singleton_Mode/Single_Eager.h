//
// Created by 13704 on 2022/10/24.
//

#ifndef SINGLETON_MODE_SINGLE_EAGER_H
#define SINGLETON_MODE_SINGLE_EAGER_H

/*-潜在问题在于no-local static对象（函数外的static对象）在不同编译单元中的初始化顺序是未定义的。
 * 也即，static Singleton instance;和static Singleton& getInstance()二者的初始化顺序不确定，
 * 如果在初始化完成之前调用 getInstance() 方法会返回一个未定义的实例-*/
class Single_Eager {
private:
    static Single_Eager instance;
private:
    Single_Eager();
    ~Single_Eager();
    Single_Eager(const Single_Eager&);
    Single_Eager& operator=(const Single_Eager&);
public:
    static Single_Eager& getInstance();
};


#endif //SINGLETON_MODE_SINGLE_EAGER_H
