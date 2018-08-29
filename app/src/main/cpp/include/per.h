//
// Created by admin on 2018/8/28.
//
#include <string>

using namespace std;
#ifndef MYAPPLICATION_PER_H
#define MYAPPLICATION_PER_H
/**
 * 类的声明
 * @tparam T
 */
template<class T>
class Person {
private:
    T userName;
    int age;
public:
    void setUserName(T const &);

    T getUserName();

};


#endif //MYAPPLICATION_PER_H
