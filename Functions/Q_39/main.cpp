#include <iostream>

using namespace std;


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
