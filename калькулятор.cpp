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

void Calculator::process()
{
    input();
    
    if (znak== '+'){
        cout<<A+B;
    }
    if (znak== '-'){
        cout<<A-B;
    }
    if (znak== '*'){
        cout<<A*B;
    }
    if (znak== '/'){
        cout<<A/B;
    }
}
int main()
{
    Calculator calculator;
    calculator.process();
    return 0;
}
