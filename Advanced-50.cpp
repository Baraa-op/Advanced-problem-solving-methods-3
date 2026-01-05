//Advanced-50
#include <iostream>
#include <string>
#include <cmath>
using namespace std  ;


string Read_PIN_Code()
{
    string PINCode ;
    cout << "plese enter PIN code : " ;
    cin >> PINCode ;
    
    return PINCode ;
}

bool LogIn()
{
    string PINCode ;
    int Counter = 3 ;
    do
    {
        Counter-- ;
        PINCode = Read_PIN_Code() ;
        
        if(PINCode == "1234")
        {
            return 1 ;
        }
        else 
        {
            system("color 4F") ;
            cout << "\wrong password you have " << Counter << " more try\n";
            
        }
        
        
        
        
        
    }while(PINCode != "1234" && Counter >= 1);
}


int main()
{
   if(LogIn())
   {
       system("color 2F") ;
       cout << "\nYour account balance is " << 7500 << "\n" ;
   }
   else
   {
   	cout << "(!) you are blocked  call the bank for help and more info" ;
   }
}
