#include <iostream>
#include <curl/curl.h>
#include "myfunction.h"
#include "api_req.h"
#include "my_class.h"


int main() {
    myclass mc = myclass(10,20,23.2,21.8);
    greeting();
    int x = 10;
    int y = 20;
    double z = x++;
    int a = add(x, y);
    std::cout << x << " + " << y << " = " << x + y << std::endl;
    printf("%d + %d = %d \n", x, y, x + y);
    std::cout << "z is " << z << " And x is " << x << std::endl;
    printf(" add result is %d \n", a);
    std::cout << "my class sum is "  << mc.calculateSum() << std::endl;
    std::cout << "my class product is " << mc.calculateProduct() << std::endl;

    requestCall();
    return 0;
}


