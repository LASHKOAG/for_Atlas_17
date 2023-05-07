#include "myclass.h"

MyClass::MyClass()
{
    //1 way
//    int x = 0;
//    int y = 0;
//    int z = 0;

    //2 way
//    init();

    MyPrint();
}

MyClass::~MyClass()
{
    std::cout << "My class finish" << std::endl;
    //delete int_something
}

MyClass::MyClass(int _x)
{
    x = _x;
    MyPrint(_x);
}

MyClass::MyClass(int _x, int _y)
{
    x = _x;
    y = _y;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
}

MyClass::MyClass(int _x, int _y, int _z)
{
    x = _x;
    y = _y;
    z = _z;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;
}

void MyClass::MyPrint()
{
    std::cout << "My class start" << std::endl;
}

void MyClass::MyPrint(int _x)
{
    std::cout << "_x: " << _x << std::endl;
    std::cout << "x: " << x << std::endl;
}

void MyClass::MyPrint(int _myArgument, bool isFlag)
{
//    if (isFlag){
//        std::cout << "_myArgument: " << _myArgument << std::endl;
//    }else{
//        MyPrint(_myArgument);
//    }

    //false
    if(!isFlag){
        MyPrint(_myArgument);
        return;
    }

    std::cout << "_myArgument: " << _myArgument << std::endl;

}

void MyClass::init()
{
    int x = 0;
    int y = 0;
    int z = 0;

//    var_const = 777;
}




