//Advanced-23
#include <iostream>
#include <cmath>
using namespace std ;

void Read_Num(float &A , float &B ,  float &C)
{
    cout << "Enter the length of the first side of the triangle (you can consider it the base): ";
    cin >> A;

    cout << "Enter the length of the second side of the triangle: ";
    cin >> B ;

    cout << "Enter the length of the third side of the triangle: ";
    cin >> C;
}

float Area_incircle_Isosceles_Triangle(float A , float B , float C)
{
    const long double PI = 3.14159265358979323846264338327950288419716939937510L ;
    
    float P = (A + B + C) / 2 ;
    float Area = PI * (pow((A * B * C) / (4 * sqrt(P * (P - A)*(P - B)*(P - C))  ) , 2)) ;
    return Area ; 
}

void Print_Result(float Area)
{
    cout << "the circle of area is : " << Area ;
}

int main() {
    
    float A , B , C;
    
    Read_Num(A , B , C) ;
    Print_Result(Area_incircle_Isosceles_Triangle(A , B , C)) ; 
    
    
    
    return 0;
}
