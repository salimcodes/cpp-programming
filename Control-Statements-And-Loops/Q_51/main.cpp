#include <iostream>
#include <cmath>
//Code Written by Salim O. Oyinlola
using namespace std;


int main()
{
    string name;
    float number_of_barrels, diameter, height, volume_of_each_barrels, volume_in_litres, number_of_bottles, number_of_cases;

    cout << "Enter the name of the whiskey: " << endl;
    cin >> name;
    cout << "Enter the number of barrels: " << endl;
    cin >> number_of_barrels;
    cout << "Enter the diameter of each barrel in inches: " << endl;
    cin >> diameter;
    cout << "Enter the diameter of each barrel in inches: " << endl;
    cin >> height;
    volume_of_each_barrels = 3.14159 * diameter * diameter * height * 0.25;
    volume_of_each_barrels = volume_of_each_barrels * 0.95; //Volume in Cubic inches;
    volume_in_litres = (volume_of_each_barrels * 3.785)/231;

    number_of_bottles = volume_in_litres/2; //two liter triangular-shaped bottles
    number_of_bottles = number_of_bottles * number_of_barrels;
    number_of_cases = number_of_bottles/12;
    number_of_cases = ceil(number_of_cases);
    cout << "The number of bottles is: " << ceil(number_of_bottles) << endl;
    cout << "The number of cases is: " << number_of_cases << endl;
    return 0;
}
