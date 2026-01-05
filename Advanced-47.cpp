//Advanced-47
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

float Total_Months(float LoanAmount , float MonthlyInstallment)
{
    return LoanAmount / MonthlyInstallment ;
}



int main()
{
   float LoanAmount = Read_Positive_Numbers("plese enter LoanAmount : ") ;
   float MonthlyInstallment = Read_Positive_Numbers("plese enter MonthlyInstallment : ") ;
   
   cout << "total months you need to finish is : " << Total_Months(LoanAmount , MonthlyInstallment) << endl;
}
