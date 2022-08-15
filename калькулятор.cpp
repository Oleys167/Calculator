#include <iostream>

using namespace std;

   int main()
{
    cout<<"Введите выражение"<<endl;
    
    int A,B;
    
    char C;
    
    std::cin >> A >> C >> B;
    
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
    return 0;
}
