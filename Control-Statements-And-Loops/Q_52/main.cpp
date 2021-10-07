#include <iostream>

using namespace std;

/*
Fuel efficiency is on everyone’s mind these days. We’re going to write a program
to help the car buyer analyze the expected price of driving her new car.
This program presents the user with a list of five types of cars and their expected
miles per gallon (mpg). We’ll ask her to select two of the vehicles and
enter the number of miles driven each year. Also enter the average price for a
gallon of gas.The program then reports the yearly total number of gallons required
by each vehicle, total cost, and shows the difference in cost between the
two vehicles. The program should use two vectors, one for the type of vehicle
and the other for integers that hold the corresponding mpg values.
*/
int main()
{
    char answer1, answer2;
    float miles_travelled, price_for_a_gallon_of_gas, total_number_of_gallons1, total_cost1, total_number_of_gallons2, total_cost2;


    cout << "The underlisted are the vehicles with their corresponding expected miles per gallon (mpg) " << endl;
    cout << endl << "A. Toyota Prius (58 Miles per Gallon)" << endl;
    cout << endl << "B. Ford Fusion Hybrid (43 Miles per Gallon)" << endl;
    cout << endl << "C. Honda Insight (55 Miles per Gallon)" << endl;
    cout << endl << "D. Hyundai Ioniq Hybrid    Blue (57 Miles per Gallon)" << endl;
    cout << endl << "E. Chevrolet Spark (30 Miles per Gallon)" << endl;
    cout << "Select one of the vehicles: (By entering the options)" << endl;
    cin >> answer1;

    cout << "Select another one of the vehicles: (By entering the options)" << endl;
    cin >> answer2;
    if(answer1 == 'A' || answer1 =='a')
        cout << "Toyota Prius and ";
    else if(answer1 == 'B' || answer1 =='b')
        cout << "Ford Fusion Hybrid and ";
    else if(answer1 == 'C' || answer1 == 'c')
        cout << "Honda Insightand ";
    else if(answer1 == 'D' || answer1 == 'd')
        cout << "Hyundai Ioniq Hybrid Blue and ";
    else if(answer1 == 'E' || answer1 == 'e')
        cout << "Chevrolet Spark and ";

    if(answer2 == 'A' || answer2 =='a')
        cout << "Toyota Prius" << endl;
    else if(answer2 == 'B' || answer2 == 'b')
        cout << "Ford Fusion Hybrid" << endl;
    else if(answer2 == 'C' || answer2 == 'c')
        cout << "Honda Insight" << endl;
    else if(answer2 == 'D' || answer2 == 'd')
        cout << "Hyundai Ioniq Hybrid Blue" << endl;
    else if(answer2 == 'E' || answer2 == 'e')
        cout << "Chevrolet Spark" << endl;
    cout << "Enter the number of miles travelled: " << endl;
    cin >> miles_travelled;
    cout << endl;
    cout << "Enter the average price of fuel in dollars: $";
    cin >> price_for_a_gallon_of_gas;
    cout << endl;
    if(answer1 == 'A' || answer1 == 'a')
    {
        total_number_of_gallons1 = miles_travelled/58.0;
        total_cost1 = total_number_of_gallons1 * price_for_a_gallon_of_gas;
        cout << "The total number of gallons used by the Toyota Prius is " << total_number_of_gallons1 << " gallons. And the total cost is " << total_cost1 << " dollars." << endl;
    }
    else if(answer1 == 'B' || answer1 == 'b')
    {
        total_number_of_gallons1 = miles_travelled/43.0;
        total_cost1 = total_number_of_gallons1 * price_for_a_gallon_of_gas;
        cout << "The total number of gallons used by the Ford Fusion Hybrid is " << total_number_of_gallons1 << " gallons. And the total cost is " << total_cost1 << " dollars." << endl;
    }
    else if(answer1 == 'C' || answer1 == 'c')
    {
        total_number_of_gallons1 = miles_travelled/55.0;
        total_cost1 = total_number_of_gallons1 * price_for_a_gallon_of_gas;
        cout << "The total number of gallons used by the Honda Insight is " << total_number_of_gallons1 << " gallons. And the total cost is " << total_cost1 << " dollars." << endl;
    }
    else if(answer1 == 'D' || answer1 == 'd')
    {
        total_number_of_gallons1 = miles_travelled/57.0;
        total_cost1 = total_number_of_gallons1 * price_for_a_gallon_of_gas;
        cout << "The total number of gallons used by the Hyundai Ioniq Hybrid Blue is " << total_number_of_gallons1 << " gallons. And the total cost is " << total_cost1 << " dollars." << endl;
    }
    else if(answer1 == 'E' || answer1 == 'e')
    {
        total_number_of_gallons1 = miles_travelled/30.0;
        total_cost1 = total_number_of_gallons1 * price_for_a_gallon_of_gas;
        cout << "The total number of gallons used by the Chevrolet Spark is " << total_number_of_gallons1 << " gallons. And the total cost is " << total_cost1 << " dollars." << endl;
    }

    if(answer2 == 'A' || answer2 == 'a')
    {
        total_number_of_gallons2 = miles_travelled/58.0;
        total_cost2 = total_number_of_gallons2 * price_for_a_gallon_of_gas;
        cout << "The total number of gallons used by the Toyota Prius is " << total_number_of_gallons2 << " gallons. And the total cost is " << total_cost2 << " dollars." << endl;
    }
    else if(answer2 == 'B' || answer2 == 'b')
    {
        total_number_of_gallons2 = miles_travelled/43.0;
        total_cost2 = total_number_of_gallons1 * price_for_a_gallon_of_gas;
        cout << "The total number of gallons used by the Ford Fusion Hybrid is " << total_number_of_gallons2 << " gallons. And the total cost is " << total_cost1 << " dollars." << endl;
    }
    else if(answer2 == 'C' || answer2 == 'c')
    {
        total_number_of_gallons2 = miles_travelled/55.0;
        total_cost2 = total_number_of_gallons2 * price_for_a_gallon_of_gas;
        cout << "The total number of gallons used by the Honda Insight is " << total_number_of_gallons2 << " gallons. And the total cost is " << total_cost2 << " dollars." << endl;
    }
    else if(answer2 == 'D' || answer2 == 'd')
    {
        total_number_of_gallons2 = miles_travelled/57.0;
        total_cost2 = total_number_of_gallons2 * price_for_a_gallon_of_gas;
        cout << "The total number of gallons used by the Hyundai Ioniq Hybrid Blue is " << total_number_of_gallons2 << " gallons. And the total cost is " << total_cost2 << " dollars." << endl;
    }
    else if(answer2 == 'E' || answer2 == 'e')
    {
        total_number_of_gallons2 = miles_travelled/30.0;
        total_cost2 = total_number_of_gallons2 * price_for_a_gallon_of_gas;
        cout << "The total number of gallons used by the Chevrolet Spark is " << total_number_of_gallons2 << " gallons. And the total cost is " << total_cost2 << " dollars." << endl;
    }

    float difference1 = total_cost2 - total_cost1;
    float difference2 = total_cost1 - total_cost2;
    if(total_cost1 > total_cost2)
        cout << endl << "The difference in the costs is: $" << difference2 << endl;
    else
        cout << endl << "The difference in the costs is: $" << difference1 << endl;

    return 0;


}
