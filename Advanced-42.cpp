//Advanced-42
#include <iostream>
#include <string>
#include <cmath>
using namespace std  ;


float Read_Positive_Numbers(string Message)
{
    
    float Number = 0   ;
    do
    {
        cout << Message ;
        cin >> Number;
    
    }while(Number < 0 );
    
    return Number;


}

float Minutes_To_Seconds(float NumberOfSeconds)
{
    return NumberOfSeconds  * 60 ;
}

float Hours_To_Seconds(float NumberOfSeconds)
{
    return Minutes_To_Seconds(NumberOfSeconds) * 60 ;
}

float Days_To_Seconds(float NumberOfSeconds)
{
    return Hours_To_Seconds(NumberOfSeconds) * 24  ;
}





int main() {
    
    float TotalOfSecond = Read_Positive_Numbers("plese enter total of seconds : ") ; 
    cout << "\n" ;
    float TotalOfMinuts = Minutes_To_Seconds(Read_Positive_Numbers("plese enter total of minutes : " ))  ;
    cout << "\n" ;
    float TotalOfHours = Hours_To_Seconds(Read_Positive_Numbers("plese enter total of hours : " )); 
    cout << "\n" ;
    float TotalOfDays = Days_To_Seconds(Read_Positive_Numbers("plese enter total of days : ")) ; 
    
    cout << "******************************\n" << endl;
    cout << "\n" ;
    
    cout << "total of seconds : " << TotalOfSecond + TotalOfMinuts + TotalOfHours + TotalOfDays << endl;
}
