//Advanced-33
#include <iostream>
#include <string>
using namespace std  ;


int Read_Number_In_Range(int From , int To)
{
    int Grade ;
    do
    {
        cout << "Enter your grade(1-100) : " ;
        cin >> Grade ;
    }while(Grade < From || Grade > To);
    
    return Grade ;
}

char Get_Grade_Letter(int Grade)
{
    if(Grade >= 90)
        return 'A' ;
    else if(Grade >= 80)
        return 'B' ;
    else if(Grade >= 70)
        return 'C' ;   
    else if(Grade >= 60)
        return 'D' ;
    else if(Grade >= 50)
        return 'E' ;
    else 
        return 'F' ;
            
}





int main() {
    
    cout << Get_Grade_Letter(Read_Number_In_Range(1 , 100)) ;
    
    
    
    return 0 ;
}
