#include <iostream>
#include <cmath>
using namespace std;
/*
The C++ Distillery produces an excellent whiskey that is blended from a combination
of mash and corn, aged in oak barrels for at least two years.The whiskey is
filtered through charcoal and bottled in clear two liter triangular-shaped bottles.

We’re going to write a program to help our distillery owner order the correct
number of bottles for his product.The oak barrels are cylindrical in shape and
range in size. Ask your user to enter the name for the whiskey that is going to
be bottled, the size and number of barrels, and their diameter and height (in
inches).We’ll assume the barrels are all the same size.Approximately five percent
of the volume is lost during the aging and filtering process. Once you have
the barrel information, calculate the amount of whiskey to be bottled and the
number of bottles required for this batch of whiskey. Bottles come to the distillery
in cases of twelve, so also report the number of cases our owner should
order. Remember, 231 cubic inches is a gallon and a gallon is equivalent to
3.785 liters.
*/
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
