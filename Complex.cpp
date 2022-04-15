#include "Classes.h"

Complex::Complex(float real_num, float imaginary_num)
{
    real = real_num;
    imaginary = imaginary_num;
}

float Complex::module()
{
    return (this->real * this->real + this->imaginary * this->imaginary);
};

void Complex::getNum()
{
    char temp;
    float temp_imaginary;
    if (this->imaginary < 0){
        temp = '-';
        temp_imaginary = abs(this->imaginary);
    }
    else{
        temp = '+';
        temp_imaginary = this->imaginary;
    }
    cout << this->real << ' ' << temp << ' ' << temp_imaginary << " * i" << '\n';
}

Complex Complex::operator +(const Complex & other)
{
    Complex temp(0, 0);
    temp.real = this->real + other.real;
    temp.imaginary = this->imaginary + other.imaginary;
    return temp;
}

Complex Complex::operator -(const Complex & other)
{
    Complex temp(0, 0);
    temp.real = this->real - other.real;
    temp.imaginary = this->imaginary - other.imaginary;
    return temp;
}

Complex Complex::operator /(const Complex & other)
{
    Complex temp(0, 0);
    temp.real = (this->real * other.real + this->imaginary * other.imaginary) /
            (other.real * other.real + other.imaginary * other.imaginary);
    temp.imaginary = (other.real * this->imaginary - this->real * other.imaginary) /
            (other.real * other.real + other.imaginary * other.imaginary);
    return temp;
}

Complex Complex::operator *(const Complex & other)
{
    Complex temp(0, 0);
    temp.real = this->real * other.real - this->imaginary * other.imaginary;
    temp.imaginary = this->real * other.imaginary + other.real * this->imaginary;
    return temp;
}