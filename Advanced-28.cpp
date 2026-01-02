//Advanced-27
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


void Print_Range_FromNto1_Using_While(int N)
{
    int Counter = 0;
    while(N > Counter)
    {
        
        cout << "Number = " << N << endl;
        N-- ; 
        
    }
}


void Print_Range_FromNto1_Using_Do_While(int N)
{
    int Counter = 0;
    do
    {
        
        cout << "Number = " << N << endl;
        N-- ;
    } while( N > Counter ) ;
}

void Print_Range_FromNto1_Using_For(int N)
{
    for(int Counter = 0 ; N > Counter ; N--)
    {
        cout << "Number = " << N << endl;
    }
}


int main() {
    
    int N = Read_Num() ;
    //Print_Range_FromNto1_Using_While(N) ;
    //Print_Range_FromNto1_Using_Do_While(N) ;
    Print_Range_FromNto1_Using_For(N);
    return 0;
}
