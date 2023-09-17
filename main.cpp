#include <iostream>
#include <curl/curl.h>
#include "myfunction.h"
#include "api_req.h"


int main() {

    greeting();
    int x = 10;
    int y = 20;
    double z = x++;
    int a = add(x, y);
    std::cout << x << " + " << y << " = " << x + y << std::endl;
    printf("%d + %d = %d \n", x, y, x + y);
    std::cout << "z is " << z << " And x is " << x << std::endl;
    printf(" add result is %d \n", a);

    requestCall();
    return 0;
}


