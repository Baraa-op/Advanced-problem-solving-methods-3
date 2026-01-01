//Advanced-25
#include <iostream>
#include <string>
using namespace std  ;

int Read_Age()
{
    int Age ;
    cout << "please enter age : " ;
    cin >> Age ;
    
    return Age ;
}


bool vali_date_num_in_range(int Number , int From , int To)
{
    return Number >= From && Number <= To ;
}


int Read_Until_Age_Between(int From , int To)
{
    int Age = 0 ;
    
    do
    {
        Age = Read_Age();
        
    } while(!vali_date_num_in_range(Age , From , To));
    
    return Age ;
}

void Print_Result(int Age)
{
    cout << "age is " << Age << "\n" ;
}

int main() {
    
    
    Print_Result(Read_Until_Age_Between(18 , 45)) ;
    
    return 0;
}
