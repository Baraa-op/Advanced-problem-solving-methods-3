//Advanced-38
#include <iostream>
#include <string>
#include <cmath>
using namespace std  ;

enum enPrime_NotPrime{Prime = 1 , NotPrime = 2};



enPrime_NotPrime Check_Prime(int Number)
{
    int M = round(Number / 2) ;
    
    for(int Counter = 2 ; Counter <= M ; Counter++){
        if(Number % Counter == 0)
            return enPrime_NotPrime::NotPrime;
    }    
    
    return enPrime_NotPrime::Prime;
}

float Read_Positive_Numbers(string Message)
{
    
    float Number = 0   ;
    do
    {
        cout << Message ;
        cin >> Number;
    
    }while(Number <= 0 );
    
    return Number;


}

void Print_Number_Type(int Number)
{
    switch(Check_Prime(Number))
    {
        case Prime :
            cout << "the Number is prime " ;
            break ;
        case NotPrime :
           cout << "the Number is not prime " ;
           break ;     
    }
}
int main() {
    
    Print_Number_Type(Read_Positive_Numbers("plese enter Number : ")) ;
    
}
