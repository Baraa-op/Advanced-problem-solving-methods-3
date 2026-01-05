//Advanced-44
#include <iostream>
#include <string>
#include <cmath>
using namespace std  ;


enum enDayOfWeek{Sun = 1 , Mon = 2 , Tues = 3 , Wed = 4 , Thu = 5 , Fri = 6 , Sat = 7} ;


int Read_Numbers_In_Range(string Message , int From , int To)
{
    
    int Number = 0   ;
    do
    {
        cout << Message ;
        cin >> Number;
    
    }while(Number < From || Number > To);
    
    return Number;


}

enDayOfWeek Read_Day_Of_Week()
{
    return (enDayOfWeek) Read_Numbers_In_Range("plese enter Number of day (Sun = 1 , Mon = 2...) : " , 1 , 7 );
}

string Get_Day_Of_Week(enDayOfWeek Day)
{
    switch(Day)
    {
        case Sun :
            return "Sunday";
        case Mon :
            return "Monday";
        case Tues :
            return "Tuesday";
        case Wed :
            return "Wednesday";
        case Thu :
            return "Thursday";
        case Fri :
            return "Friday";
        case Sat :
            return "Saturday";
        default :
            return "wrong input. please try again later " ; 
        
    }
}

int main()
{
   cout << Get_Day_Of_Week(Read_Day_Of_Week()) << endl  ;
   cout << "\n" ;
}
