class Complex
{
private:
    float real,
        imaginary;
public:
    Complex(float, float);
    void getNum();
    Complex operator +(const Complex & other);
    Complex operator -(const Complex & other);
    Complex operator /(const Complex & other);
    Complex operator *(const Complex & other);
};