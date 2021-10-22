//Code Written by Salim O. Oyinlola
#include <iostream>
#include <cmath>
// FOR MATHEMATICAL OPERATIONS
using namespace std;

int main()
{
    string answer_status;
    cout << "Would you like to convert a whole number of inches to feet? " << endl;
    cout << "Enter Y for Yes or N for No." << endl;
    cin >> answer_status; // Saving the status of the user on if they want to the operation again
    int input_inches, input_feet, output_feet, output_inches;
    float input_inches_float, input_feet_float, output_feet_float, output_inches_float;
    if(answer_status == "Y" || answer_status == "y")
    {
        cout << "Input the distance in inches: ";
        cin >> input_inches;
        output_feet = input_inches/12;
        //output_feet = floor(output_feet);
        // No need for floor division because the integer data type will only spit out integer when it performs operations!
        output_inches = input_inches % 12;
        cout << output_feet << " feet, " << output_inches << " inches." << endl;
    }


    else if(answer_status == "N" || answer_status == "n")
    {
        cout << "Would you like to convert feet and inches to decimal feet? " << endl;
        cout << "Enter Y for Yes or N for No." << endl;
        cin >> answer_status;
        if(answer_status == "Y" || answer_status == "y")
        {
            cout << "Input the distance in feet and inches: " << endl;
            cout << "In feet: " << endl;
            cin >> input_feet_float;
            cout << "In inches: " << endl;
            cin >> input_inches_float;

            // Ignore the code below!
            /*output_inches = (float)output_inches;
            output_feet = (float)output_feet;
            input_inches = (float)input_inches;
            input_feet = (float)input_feet;*/

            output_inches_float = input_inches_float/12.0;
            output_feet_float = input_feet_float + output_inches_float;
            cout << output_feet_float << " feet." << endl;
        }
        else if(answer_status == "N" || answer_status == "n")
        {
            cout << "Would you like to convert feet and inches to inches? " << endl;
            cout << "Enter Y for Yes or N for No." << endl;
            cin >> answer_status;
            if(answer_status == "Y" || answer_status == "y")
            {
                cout << "Input the distance parameter in feet: " << endl;
                cin >> input_feet;
                cout << "Input the distance parameter in inches: " << endl;
                cin >> input_inches;
                output_inches = input_feet * 12;
                output_inches += input_inches;
            }
            else
                cout << "Your required operation is beyond the scope of this program! " << endl;
        }

    }
    return 0;
}
