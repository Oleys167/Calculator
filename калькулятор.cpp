#include <iostream>

using namespace std;

void process(int A, int B, char C)
{
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
    cout<<"Введите выражение"<<endl;
    
    int A,B;
    
    char C;
    
    std::cin >> A >> C >> B;
    
    process(A,B,C);
    
    return 0;
}
