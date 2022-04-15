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


    ifstream file("complex.txt");
    string temp;
    getline(file, temp);
    int n = stoi(temp);
    cout << n << endl;
    int x, y;
    float max_module = -100000;
    Complex maximum;
    Complex *p = new Complex [n];
    for (int i = 0; i < n; i++)
    {
        file >> x >> y;
        Complex temp_second(x, y);
        p[i] = temp_second;
    }
    file.close();

    for (int i = 0; i < n; i++)
    {
        if (p[i].module() > max_module)
        {
            max_module = p[i].module();
            maximum = p[i];
        }
    }
    cout << "Maximum module: " << max_module << endl;
    cout << "Complex num: ";
    maximum.getNum();
    return 0;
};