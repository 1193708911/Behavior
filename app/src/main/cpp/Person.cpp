//
// Created by admin on 2018/8/28.
//
#include <iostream>
#include "include/per.h"


template<class T>
void Person<T>::setUserName(T const &t) {
    this->userName = t;
}

template<class T>
T Person<T>::getUserName() {
    return this->userName;
}
