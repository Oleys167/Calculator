#include "Calculator.h"
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
    if (znak== '%'){
        cout<<A%B;
    }
}