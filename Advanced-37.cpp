//Advanced-37
#include <iostream>
#include <string>
using namespace std  ;


float Read_Number(string Message)
{
    float Number = 0 ;
    cout << Message  + " : " ;
    cin >> Number;
    
    return Number ;
}

float Sum_Num()
{
    
    float Sum = 0 , Number = 0 ;
    int  Counter = 1 ;
    do
    {
        Number = Read_Number("plese enter Number " + to_string(Counter)) ; 
        
        if(Number == -99)
            break ;
         
        Sum += Number;
        Counter++ ;   
    
    }while(true);
    
    return Sum ;
}

int main() {
    
    float Num = Sum_Num();
    cout << endl << "Result = " << Num<< endl;
    return 0 ;
}
