//Advanced-49
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
    
    do
    {
        PINCode = Read_PIN_Code() ;
        
        if(PINCode == "1234")
        {
            return 1 ;
        }
        else 
        {
            cout << "\nwrong PIN\n" ;
            system("color 4F") ;
        }
        
        
        
        
        
    }while(PINCode != "1234");
}


int main()
{
   if(LogIn())
   {
       system("color 2F") ;
       cout << "\nYour account balance is " << 7500 << "\n" ;
   }
}
