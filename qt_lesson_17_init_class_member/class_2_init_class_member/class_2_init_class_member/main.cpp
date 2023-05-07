#include <iostream>
#include "myclass.h"
using namespace std;

int main()
{
    //    MyClass* test = new MyClass();

    MyClass* test = new MyClass(7);

    test->MyPrint(123, true);

    if (test != NULL){
        delete test;
    }


    return 0;
}
