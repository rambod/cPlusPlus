#include <iostream>
#include "my_class.h"

myclass::myclass(int a, int b, double c, double d)
{
    setValues(a, b, c, d);
}

void myclass::setValues(int a, int b, double c, double d)
{
    var1 = a;
    var2 = b;
    var3 = c;
    var4 = d;
}

int myclass::calculateSum()
{
    return var1 + var2;
}

double myclass::calculateProduct()
{
    return var3 * var4;
}
