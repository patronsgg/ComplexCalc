#include "Classes.h"


int main(){
    Complex first(5, 10), second(10, 5);
    Complex a = first + second;
    a.getNum();
    Complex b = first - second;
    b.getNum();
    Complex c = first / second;
    c.getNum();
    Complex d = first - second;
    d.getNum();
    return 0;
};