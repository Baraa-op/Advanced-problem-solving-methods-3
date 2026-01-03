//Advanced-34
#include <iostream>
#include <string>
using namespace std  ;


int Read_Total_Salary(int From , int To)
{
    float Total ;
    do
    {
        cout << "enter your total salary: " ;
        cin >> Total ;
    }while(Total < From || Total > To) ;
    
    return Total;
}

float Get_Comission_Percentage(float TotalSalary)
{
    if(TotalSalary >= 1000000)
        return 0.01 ;
    else if(TotalSalary >= 500000)
        return 0.02 ;
    else if(TotalSalary >= 100000)
        return 0.03 ;
    else if(TotalSalary >= 50000)
        return 0.05 ;    
    else 
        return 0.00 ;    
    
}



float Calclute_Total_Comission(float TotalSalary)
{
    return Get_Comission_Percentage(TotalSalary) * TotalSalary  ;
}



int main() {
    
    float TotalSalary = Read_Total_Salary(0 , 1000000) ;
    
    cout << "\nTotal commission is : " << Calclute_Total_Comission(TotalSalary) ;
    
    return 0 ;
}
