#include <iostream>

using namespace std;

class Calculator{
    int A,B;
    char znak;
    void input(){cin >> A >> znak >> B;}
public:
    Calculator(){cout<<"Введите выражение"<<endl;}
    void process();
};