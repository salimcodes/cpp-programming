#include <iostream>
#include <cmath>


/*
Written by Salim O. Oyinlola
*/

using namespace std;

//Declaring functions
void AskRandHCyl(double *, double *);  //Using pointers. Hence, call by reference
double CalcVolAndSA(double, double);
int main()
{

    double radius, height, surface_area, volume, answer;

    AskRandHCyl(&radius, &height);
    answer = CalcVolAndSA(radius, height);
    cout << "The answer is " << answer << endl;



    return 0;
}


// Initializing Functions
void AskRandHCyl(double *r, double *h)
{
    double radius, height;
    cout << "\n Enter the radius of the cylinder: " << endl;
    cin >> radius;
    cout << "\n Enter the height of the cylinder: " << endl;
    cin >> height;
    *r = radius;
    *h = height;
}

double CalcVolAndSA(double r, double h)//, double *SA, double *Volume)
{
    const double pi = 3.14159265; //setting the constant pi
    double rad, hei, surface_area, vol, volume;
    //surface_area = 2* pi * rad * hei;
    volume = 3.14159265 * rad * rad * hei;
    return volume;
}
