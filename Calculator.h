#include <iostream>

using namespace std;
//Класс калькулятор предназначен для сложения,вычитания,
//умножения,деления,получения остатка от деления 2-х чисел
class Calculator{
    int A,B;//первое и второе
    char znak;
    void input(){cin >> A >> znak >> B;}
public:
    Calculator(){cout<<"Введите выражение"<<endl;}
    void process();
};