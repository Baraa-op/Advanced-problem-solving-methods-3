#include <iostream>
#include <string>
using namespace std  ;

int Read_Age()
{
    int Age ;
    cout << "plese enter age : " ;
    cin >> Age ;
    
    return Age ;
}

bool vali_date_num_in_range(int Number , int From , int To)
{
    return Number >= From && Number << To ;
}

void Print_Result(int Age)
{
    if(vali_date_num_in_range(Age , 18 , 45))
        cout << Age << " is a valid age\n" ;
    else 
        cout << Age << " is a invalid age\n" ;
}

int main() {
    
    
    Print_Result(Read_Age()) ;
    
    return 0;
}
