//Advanced-48
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

float Total_MonthlyInstallment(float LoanAmount , float TotalMonths)
{
    return LoanAmount / TotalMonths ;
}



int main()
{
   float LoanAmount = Read_Positive_Numbers("plese enter LoanAmount : ") ;
   float TotalMonths = Read_Positive_Numbers("plese enter TotalMonths : ") ;
   
   cout << "total months you need to finish is : " << Total_MonthlyInstallment(LoanAmount , TotalMonths) << endl;
}
