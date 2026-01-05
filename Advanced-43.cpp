//Advanced-43
#include <iostream>
#include <string>
#include <cmath>
using namespace std  ;


struct stTaskDuration
{

int NumberOfDays , NumberOfHours,  NumberOfMinutes  , NumberOfSeconds;

};



int Read_Positive_Numbers(string Message)
{
    
    int Number = 0   ;
    do
    {
        cout << Message ;
        cin >> Number;
    
    }while(Number < 0 );
    
    return Number;


}

stTaskDuration Seconds_To_Task_Duration(int TotalSeconds)
{
    stTaskDuration TaskDuration ;
    const int SecondPerDay = 24 * 60 * 60 ; 
    const int SecondPerHours = 60 * 60 ; 
    const int SecondPerMinuts =  60 ; 
    
    int Remainder = 0 ;
    
    TaskDuration.NumberOfDays = TotalSeconds / SecondPerDay; 
    Remainder = TotalSeconds % SecondPerDay; 
    
    TaskDuration.NumberOfHours = Remainder / SecondPerHours; 
    Remainder = Remainder % SecondPerHours; 
    
    TaskDuration.NumberOfMinutes = Remainder / SecondPerMinuts  ; 
    Remainder = Remainder % SecondPerMinuts; 
    
    TaskDuration.NumberOfSeconds = Remainder;
    
    return TaskDuration ;
    
    
}

void Print_Result(stTaskDuration TaskDuration)
{
    cout << "\n" << endl;
    cout <<  TaskDuration.NumberOfDays << ":" 
        << TaskDuration.NumberOfHours << ":" 
        << TaskDuration.NumberOfMinutes << ":" 
        << TaskDuration.NumberOfSeconds  << endl;
}

int main()
{
    
    int TotalSeconds = Read_Positive_Numbers("plese enter total of seconds: ") ;
    Print_Result(Seconds_To_Task_Duration(TotalSeconds)) ;
}
