//Advanced-31
#include <iostream>
#include <string>
using namespace std  ;



int Read_Number()
{
    int Number;
    cout << "plese enter Number: " ;
    cin >> Number;
    
    return Number ;
}





int Read_Power()
{
    int Number;
    cout << "plese enter Power : " ;
    cin >> Number;
    
    return Number ;
}

int Power_Of_N(int Number , int Power)
{
    if(Power == 0)
        return 1 ;
        
    int Counter = 1 ;
    for(int i = 1 ; i<= Power ; i++ )   
    {
        Counter = Counter * Number;
    }
    
    return Counter ;
}




int main() {
    cout << Power_Of_N(Read_Number() , Read_Power()) ;
    
    return 0 ;
}
