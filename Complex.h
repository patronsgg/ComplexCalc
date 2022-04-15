#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
using namespace std;

class Complex
{
private:
    float real,
        imaginary;
public:
    Complex(){};
    Complex(float, float);
    float module();
    void getNum();
    Complex operator +(const Complex & other);
    Complex operator -(const Complex & other);
    Complex operator /(const Complex & other);
    Complex operator *(const Complex & other);
};