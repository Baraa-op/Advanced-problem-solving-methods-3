// advanced solution-20
#include<iostream>
#include<cmath>
using namespace std;

void Read_Square_Side(float &A)
{
	cout << "enter side of square: " ;
	cin >> A ;
	
	
}

float CalculateCircleArea(float A)
{
	const long double PI = 3.14159265358979323846264338327950288419716939937510L ;
	float Area = PI * pow(A , 2) / 4 ; 
	return Area ; 
}

void PrintResult(float Area)
{
	cout << "the circle of Area = : " << Area ;
}


int main()
{
	
	float D ;
	
	Read_Square_Side(D) ;
	
	PrintResult(CalculateCircleArea(D) ) ;
	
	
	return 0 ;
}
