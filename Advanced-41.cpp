//Advanced-41
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
    
    }while(Number <= 0 );
    
    return Number;


}

float Hours_To_Days(float NumberOfHours)
{
    return (float)NumberOfHours  / 24 ;
}

float Hours_To_Weeks(float NumberOfHours)
{
    return (float)Hours_To_Days(NumberOfHours) / 7;
}

float Days_To_Weeks(float NumberOfDays)
{
    return (float)NumberOfDays / 7 ;
}





int main() {
    float NumberOfHours = Read_Positive_Numbers("plese enter Number of hours: " ) ;
    float NumberOfDays = Hours_To_Days(NumberOfHours)  ;
    float NumberOfWeeks = Days_To_Weeks(NumberOfDays) ;
    cout << "\n" << endl;
    
    cout << "total of hours : " << NumberOfHours << "\n" ;
    cout << "total of days : " << NumberOfDays << "\n"  ;
    cout << "total of weeks : " << NumberOfWeeks << "\n" ; 
    
}
