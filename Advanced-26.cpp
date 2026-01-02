//Advanced-26
#include <iostream>
#include <string>
using namespace std  ;

int Read_Num()
{
    int Num ;
    cout << "plese enter Number : " ;
    cin >> Num ;
    
    return Num ;
}


void Print_Range_From1toN_Using_While(int N)
{
    int Counter = 0;
    while(Counter < N)
    {
        Counter++ ;
        cout << "Number = " << Counter << endl;
        
    }
}


void Print_Range_From1toN_Using_Do_While(int N)
{
    int Counter = 0;
    do
    {
        Counter++ ;
        cout << "Number = " << Counter << endl;
    } while( Counter < N ) ;
}

void Print_Range_From1toN_Using_For(int N)
{
    for(int Counter = 1 ; Counter <= N ; Counter++)
    {
        cout << "Number = " << Counter << endl;
    }
}


int main() {
    
    int N = Read_Num() ;
    //Print_Range_From1toN_Using_While(N) ;
    //Print_Range_From1toN_Using_Do_While(N) ;
    Print_Range_From1toN_Using_For(N);
    return 0;
}
