//Advanced-30
#include <iostream>
#include <string>
using namespace std  ;


int Read_Positive_Numbers(string Message)
{
    int Number;
    do
    {
        cout << Message  ;
        cin >> Number ;
    } while(Number < 0) ;
    
    return Number;
}

int Factorial(int N)
{

    int F = 1 ;
    for(int Counter = N ; Counter >= 1 ; Counter--)
    {
        F = F * Counter;
    }
    
    return F ;
}

int main() {
    
    
    
   cout <<  Factorial(Read_Positive_Numbers("plese enter positive number : ") ) ;
    
}
