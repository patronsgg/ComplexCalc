#include "Complex.h"


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
    ifstream file("E:\\yandex\\oopproject\\complex.txt");
    string temp;
    getline(file, temp);
    int n = stoi(temp);
    Complex *p = new Complex [n];
    while (file) {
        getline(file, temp);

    }
    return 0;
};