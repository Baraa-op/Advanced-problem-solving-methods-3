//Advanced-22
#include <iostream>
using namespace std ;

void Read_Num(float &A , float &B)
{
    cout << "Enter the base of the isosceles triangle (a): ";
    cin >> A;

    cout << "Enter the length of the equal sides (b): ";
    cin >> B;
}

float Area_incircle_Isosceles_Triangle(float A , float B)
{
    const long double PI = 3.14159265358979323846264338327950288419716939937510L ;
    float Area = PI * (pow(B , 2) / 4) * ((2 * A - B) / (2 * A + B));
    return Area ;
}

void Print_Result(float Area)
{
    cout << "the circle of area is : " << Area ;
}

int main() {
    
    float A , B ;
    
    Read_Num(A , B) ;
    Print_Result(Area_incircle_Isosceles_Triangle(A , B)) ; 
    
    
    
    return 0;
}
