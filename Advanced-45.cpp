//Advanced-45
#include <iostream>
#include <string>
#include <cmath>
using namespace std  ;



enum enMonthOfYear {
    Jan = 1,  // January
    Feb = 2,  // February
    Mar = 3,  // March
    Apr = 4,  // April
    May = 5,  // May
    Jun = 6,  // June
    Jul = 7,  // July
    Aug = 8,  // August
    Sep = 9,  // September
    Oct = 10, // October
    Nov = 11, // November
    Dec = 12  // December
};


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

enMonthOfYear Read_Months_Of_Year()
{
    return (enMonthOfYear) Read_Numbers_In_Range("plese enter Number of month (Jan = 1...) : " , 1 , 12 );
}

string Get_Month_Of_Year(enMonthOfYear Month)
{
    switch(Month)
{
    case Jan: return "January";
    case Feb: return "February";
    case Mar: return "March";
    case Apr: return "April";
    case May: return "May";
    case Jun: return "June";
    case Jul: return "July";
    case Aug: return "August";
    case Sep: return "September";
    case Oct: return "October";
    case Nov: return "November";
    case Dec: return "December";
    default: return "invalid input";
}
}

int main()
{
   cout << Get_Month_Of_Year(Read_Months_Of_Year()) << endl  ;
   cout << "\n" ;
}
