#include <iostream>

using namespace std;

class Calculator{
    int A,B;
    
    char C;
public:
    Calculator(){cout<<"Введите выражение"<<endl;}
    void process();
    void input(){cin >> A >> C >> B;}
};

void Calculator::process()
{
    input();
    
    if (C== '+'){
        cout<<A+B;
    }
    if (C== '-'){
        cout<<A-B;
    }
    if (C== '*'){
        cout<<A*B;
    }
    if (C== '/'){
        cout<<A/B;
    }
}
int main()
{
    Calculator calculator;
    calculator.process();
    return 0;
}
