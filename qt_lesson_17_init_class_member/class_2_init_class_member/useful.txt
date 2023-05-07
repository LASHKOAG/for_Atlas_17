#include <iostream>
#include "myclass.h"
using namespace std;


int main()
{
    /*
    MyClass* test123 = new MyClass(); //malloc calloc realloc

    if (test123 != NULL)
    {
        delete test123;                //free
    }
    */

//    MyClass* k = new MyClass(5);
//    MyClass* k = new MyClass(3, 5);
    MyClass* k = new MyClass(3, 4, 5);

    if (k != NULL)
    {
        delete k;
    }
    return 0;
}
