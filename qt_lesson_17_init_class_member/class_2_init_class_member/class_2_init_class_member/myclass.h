#ifndef MYCLASS_H
#define MYCLASS_H
#include <iostream>

class MyClass
{
public:
    MyClass();
    ~MyClass(); //destructor

    MyClass(int _x);
    MyClass(int _x, int _y);
    MyClass(int _x, int _y, int _z);

    void MyPrint();
    void MyPrint(int _x);
    void MyPrint(int _myArgument, bool isFlag);

    int x = 25; // copy init
    int y; //direct init
    int z{123}; //list init 11 standart

    //struct Test_A
    //x
    //y
    //z
    //Test_A ta{5, 67, 57};

    //ta.x = 5;
    //ta.y = 67;
    //ta.z = 57;

    const int var_const = 555;

    void init();


};

#endif // MYCLASS_H
