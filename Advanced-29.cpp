//Advanced-29
#include <iostream>
#include <string>
using namespace std  ;


enum enOddOrEven{Odd = 1 , Even = 2} ;




int Read_Num()
{
    int Num ;
    cout << "plese enter Number : " ;
    cin >> Num ;
    
    return Num ;
}

enOddOrEven Check_Odd_Or_Even(int Number)
{
    if(Number % 2 != 0)
        return enOddOrEven::Odd ;
    else 
        return enOddOrEven::Even ;    
}





int Sum_Even_Num_From1toN(int Number)
{
    
    int Sum = 0 ;
    
    for(int Counter = 1 ; Counter <= Number; Counter++)
    {
        if(Check_Odd_Or_Even(Counter) ==enOddOrEven::Even)
        {
            Sum+=Counter;
        }
    }
    
    return Sum ;
}

void Print_Result(int Number)
{
    cout << "the sum of even Numbers is : " << Number << "\n" ;
}


int main() {
    
    int Number = Read_Num() ;
    Print_Result(Sum_Even_Num_From1toN(Number)) ;
    
}
