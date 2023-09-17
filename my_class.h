#ifndef MYCLASS_H
#define MYCLASS_H

class myclass {
public:
    // Constructor
    myclass(int a, int b, double c, double d);

    // Member function to set values
    void setValues(int a, int b, double c, double d);

    // Member function to calculate the sum of a and b
    int calculateSum();

    // Member function to calculate the product of c and d
    double calculateProduct();

private:
    int var1;
    int var2;
    double var3;
    double var4;
};

#endif
