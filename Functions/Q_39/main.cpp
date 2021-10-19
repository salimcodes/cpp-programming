#include <iostream>

using namespace std;
/*
The C++ Water and Ice Company has another problem for us to solve.When
water freezes into ice it expands in volume but still weighs the same.The same
volume of liquid water expands to fill a volume approximately ten percent
larger. (If you had 100 ounces of liquid water and froze it, the corresponding
ice volume is equivalent to 110 fluid ounces.)
The company produces cubes of ice that it sells in bags. To make the ice,
square trays have square compartments that are filled with water. For example,
trays may contain 100 * 100 cubes,each cube is intended to be one square
inch.The ice trays are filled with water and frozen.This program allows the ice
makers to enter ice cube tray sizes and cube size. We determine how much
water (in gallons) is required to fill that tray so that the resultant cubes have
expanded to completely fill the cube but doesn’t expand over the lip of the
tray! The program functions are AskForTraySize (asks for the number of
cubes on the tray), AskForCubeSize (asks for single dimension for the cubes
side in inches) and CalcGallons that is given the tray and cube sizes. The
function returns the gallons needed. Remember to use the water to ice expansion
information to obtain accurate results!
*/

float AskForTraySize();
float AskForCubeSize();
float CalcGallons(float cube_number1, float cube_size1);

int main()
{
    float cube_num, cube_siz, total_volume;
    cube_num = AskForTraySize();
    cube_siz = AskForCubeSize();
    total_volume = CalcGallons(cube_num, cube_siz);
    cout << "The total number of volumes needed is: " << total_volume << " gallons." << endl;
}

float AskForTraySize()
{
    float cube_number;
    cout << "Enter the number of cubes in the tray: " << endl;
    cin >> cube_number;
    return cube_number;
}

float AskForCubeSize()
{
    float cube_size;
    cout << "Enter the single dimension for the cubes side in inches: " << endl;
    cin >> cube_size;
    return cube_size;
}

float CalcGallons(float cube_number1, float cube_size1)
{
    float volume;
    volume = cube_size1 * cube_size1 * cube_size1;
    volume = volume * cube_number1;
    //Making adjustments for expansion;
    volume = (10 * volume)/11;
    //Converting to gallons from square ounce
    volume = volume * 0.0043; //Since 1 Cubic inches = 0.0043 US Liquid Gallon
    return volume;
}
