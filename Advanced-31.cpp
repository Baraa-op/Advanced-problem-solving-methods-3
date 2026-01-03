//Advanced-31
#include <iostream>
#include <string>
using namespace std  ;



int Read_Numbers()
{
    int Number;
    cout << "plese enter Number: " ;
    cin >> Number;
    
    return Number ;
}


void Power_Of_2_3_4(int Number){
    cout << "the power 2 of Number is : " << Number*Number << "\n" ;
    cout << "the power 3 of Number is : " << Number*Number*Number << "\n" ;
    cout << "the power 4 of Number is : " << Number*Number*Number*Number << "\n" ;
}

int main() {
    Power_Of_2_3_4(Read_Numbers());
    
    return 0 ;
}
