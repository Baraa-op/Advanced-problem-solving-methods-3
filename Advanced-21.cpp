//Advanced-21
#include <iostream>
using namespace std ;

void Read_Num(float &l)
{
    cout << "enter circumference : " ;
    cin >> l ;
}

float Area_From_Circumference(float l)
{
    const long double PI = 3.14159265358979323846264338327950288419716939937510L ;
    l = pow(l , 2) / (4*PI) ;
    return l ;
}

void Print_Result(float Area)
{
    cout << "the circle of area is : " << Area ;
}

int main() {
    
    float l ;
    
    Read_Num(l) ;
    Print_Result(Area_From_Circumference(l)) ; 
    
    
    
    return 0;
}
