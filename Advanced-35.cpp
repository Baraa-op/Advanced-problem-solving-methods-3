//Advanced-35
#include <iostream>
#include <string>
using namespace std  ;



struct stPiggyBankContent{int Pennies , Nickels , Dimes , Quarters , Dollars ; } ; 


stPiggyBankContent Read_Piggy_Bank_Content()
{
    stPiggyBankContent PiggyBankContent ;
    cout << "plese enter total Pennies : " ;
    cin >>  PiggyBankContent.Pennies ; 
    
    cout << "plese enter total Nickels : " ;
    cin >>  PiggyBankContent.Nickels ;
    
    cout << "plese enter total Dimes : " ;
    cin >>  PiggyBankContent.Dimes;
    
    cout << "plese enter total Quarters : " ;
    cin >>  PiggyBankContent.Quarters ;
    
    cout << "plese enter total Dollars : " ;
    cin >>  PiggyBankContent.Dollars ;
    
    return PiggyBankContent;
}

float Calculate_Total(stPiggyBankContent PiggyBankContent)
{
    float TotalPennies = PiggyBankContent.Pennies * 1 + PiggyBankContent.Nickels * 5 + PiggyBankContent.Dimes * 10 + PiggyBankContent.Quarters * 25 + PiggyBankContent.Dollars * 100 ;
    return TotalPennies ;
}



int main() {
    
    float PiggyBankContent=Calculate_Total(Read_Piggy_Bank_Content()) ; ;
    
    cout << "\nyour total in Pennies is : " <<  PiggyBankContent << "\n" ;
    cout << "\nyour total in dollers is : " <<  PiggyBankContent/100 << "\n" ;
    
    
    
    return 0 ;
}
