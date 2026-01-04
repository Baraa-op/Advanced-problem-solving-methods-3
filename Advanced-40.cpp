//Advanced-40
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


float Total_Bill_With_Tax(float TotalBill)
{
    TotalBill = TotalBill * 1.1 ;
    TotalBill = TotalBill * 1.16 ;
    
    return TotalBill;
}




int main() {
    
    float TotalBill = Read_Positive_Numbers("plese enter total bill : ") ;
    
    cout << "\n" ;
    
    
    cout << "total bill : " << TotalBill <<  endl;
    cout << "***************************\n" << endl;
    cout << "total bill after service and tax : " << Total_Bill_With_Tax(TotalBill) <<  endl;
    
}
