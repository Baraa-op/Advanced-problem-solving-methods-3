//Advanced-39
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


float Calclute_Remainder(float TotalBill , float TotalPaid)
{
    return TotalPaid - TotalBill;
}




int main() {
    float TotalPaid = Read_Positive_Numbers("plese enter total paid : " );
    float TotalBill = Read_Positive_Numbers("plese enter total bill : ") ;
    
    cout << "\n" ;
    
    cout << "total paid : " << TotalPaid <<  endl;
    cout << "total bill : " << TotalBill <<  endl;
    cout << "***************************\n" << endl;
    cout << "Remainder : " << Calclute_Remainder(TotalBill , TotalPaid) <<  endl;
    
}
