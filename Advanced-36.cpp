//Advanced-36
#include <iostream>
#include <string>
using namespace std  ;


enum enOperation_Type{Add = '+' , Subtract = '-' , Multiply = '*' , Divide = '/'} ;

float Read_Number(string Message)
{
    float Number = 0 ;
    cout << Message  ;
    cin >> Number ;
    
    return Number;
}



enOperation_Type Read_Type()
{
    char OT = '+' ;
    cout << "plese enter operation type(+ , - , * , /) ?  : " ;
    cin >> OT ;
    
    return (enOperation_Type)OT ;
}

float Calclute(float Number1 , float Number2 , enOperation_Type OpType)
{
    switch(OpType)
    {
        case Add :
            return Number1 + Number2 ;
        case Subtract :
            return Number1 - Number2  ;
        case Multiply:
            return Number1 * Number2; 
        case Divide :
            return Number1 / Number2; 
        default : 
            cout << "wrong operator plese try again " ;
            return 0 ;
    }
}



int main() {
    
    float Number1 = Read_Number("plese enter First Number : ") ;
    float Number2 = Read_Number("plese enter second Number : ") ;
    
    enOperation_Type OpType = Read_Type() ;
    
    cout << Calclute(Number1 , Number2 , OpType) ;
    
    
    
    return 0 ;
}
