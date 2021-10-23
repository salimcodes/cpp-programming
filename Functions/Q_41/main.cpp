#include <iostream>

using namespace std;
/*
Wouldn’t it be nice to have a helper in the kitchen? The C++ Cook’s Helper
program provides our chef with an easy way to convert those pesky volumetric
measurements. Recall that a gallon is four quarts, a quart is two pints, a pint
is two cups.There are eight ounces in a cup. An ounce is two tablespoons and
a tablespoon is three teaspoons. As a starting point, write a series of functions
that make the conversions listed above (going both ways).That is, write a GallonsToQuarts,
which is passed gallons and returns quarts, and a QuartsToGallons,
which is passed quarts and returns gallons. You’ll have twelve functions.
Be sure to use descriptive names for each converter function.
Write a C++ Cook’s Helper program that provides the user with a menu of
five possible conversions she might need in the kitchen. The menu accesses
custom built conversion functions.You need to decide what conversions would
be most useful. Here’s one, convert QuartsToOunces that is passed quarts and
returns ounces. (For example, in converting QuartsToOunces, you’d pass the
quart value to QuartsToPints, and the pint value to PintsToCups and cup value
to CupsToOunces.) Your main should present your menu and allow the user to
enter a choice. Obtain the input value, call the menu’s associated function.
Then write both input and result to the screen.
*/

float GallonsToQuartz();
float QuartzToGallons();
float QuartzToPints();
float PintsToQuartz();
float PintsToCups();
float CupsToPints();
float CupsToOunces();
float OuncesToCups();
float OuncesToTableSpoons();
float TableSpoonsToOunces();
float TableSpoonsToTeaSpoons();
float TeaSpoonsToTableSpoons();


int main()
{
    char status;
    do
    {
        int answer;
        cout << "Enter the operation you would like to perform: (A-J)" << endl;
        cout << endl << "1. Gallons To Quartz" << endl;
        cout << endl << "2. Quartz To Gallons" << endl;
        cout << endl << "3. Quartz To Pints" << endl;
        cout << endl << "4. Pints To Quartz" << endl;
        cout << endl << "5. Cups To Pints" << endl;
        cout << endl << "6. Pints To Cups" << endl;
        cout << endl << "7. Cups To Ounces" << endl;
        cout << endl << "8. Ounces To Cups" << endl;
        cout << endl << "9. Ounces To TableSpoons" << endl;
        cout << endl << "10. TableSpoons To Ounces" << endl;
        cout << endl << "11. TableSpoons To TeaSpoons" << endl;
        cout << endl << "12. TeaSpoons To TableSpoons" << endl;
        cout << "Enter your answer: " << endl;
        cin >> answer;
        if(answer == 1)
            {
                GallonsToQuartz();
            }
        else if(answer == 2)
            {
                QuartzToGallons();
            }
        else if(answer == 3)
            {
                QuartzToPints();
            }
        else if(answer == 4)
            {
                PintsToQuartz();
            }
        else if(answer == 5)
            {
                CupsToPints();
            }
        else if(answer == 6)
            {
                PintsToCups();
            }
        else if(answer == 7)
            {
                CupsToOunces();
            }
        else if(answer == 8)
            {
                OuncesToCups();
            }
        else if(answer == 9)
            {
                OuncesToTableSpoons();
            }
        else if(answer == 10)
            {
                TableSpoonsToOunces();
            }
        else if(answer == 11)
            {
                TableSpoonsToTeaSpoons();
            }
        else if(answer == 12)
            {
                TeaSpoonsToTableSpoons();
            }
        else
            cout << "Invalid Message." << endl;
        cout << "Do you want to perform the operation again? (Y or N) " << endl;
        cin >> status;
        if(status == 'n' || 'N')
            cout << "Thank you!" << endl;
    }
    while(status == 'Y' || status == 'y');
}

float GallonsToQuartz()
{
    float Gallons, Quartz;
    cout << "Enter quantity in Gallons: " << endl;
    cin >> Gallons;
    Quartz = Gallons/4;
    cout << "The quantity in quartz is given as: " << Quartz << endl;
}
float QuartzToGallons()
{
    float Gallons, Quartz;
    cout << "Enter the quantity in Quartz: " << endl;
    cin >> Quartz;
    Gallons = Quartz * 4;
    cout << "The quantity in gallons is given as: " << Gallons << endl;
}
float QuartzToPints()
{
    float Quartz, Pints;
    cout << "Enter the quantity in Quartz: " << endl;
    cin >> Quartz;
    Pints = Quartz/2;
    cout << "The quantity in pints is given as: " << Pints << endl;
}
float PintsToQuartz()
{
    float Quartz, Pints;
    cout << "Enter the quantity in Pints: " << endl;
    cin >> Pints;
    Quartz = Pints * 2;
    cout << "The quantity in quartz is given as: " << Quartz << endl;
}
float PintsToCups()
{
    float Pints, Cups;
    cout << "Enter the quantity in pints: " << endl;
    cin >> Pints;
    Cups = Pints/2;
    cout << "The quantity in cups is given as: " << Cups << endl;
}
float CupsToPints()
{
    float Pints, Cups;
    cout << "Enter the quantity in cups: " << endl;
    cin >> Cups;
    Pints = Cups*2;
    cout << "The quantity in pints is given as: " << Pints << endl;
}
float CupsToOunces()
{
    float Cups, Ounces;
    cout << "Enter the quantity in cups: " << endl;
    cin >> Cups;
    Ounces = Cups/8;
    cout << "The quantity in ounces is given as: " << Ounces << endl;
}
float OuncesToCups()
{
    float Cups, Ounces;
    cout << "Enter the quantity in Ounces: " << endl;
    cin >> Ounces;
    Cups = Ounces*8;
    cout << "The quantity in cups is given as: " << Cups <<  endl;
}
float OuncesToTableSpoons()
{
    float Ounces, TableSpoons;
    cout << "Enter the quantity in Ounces: " << endl;
    cin >> Ounces;
    TableSpoons = Ounces/2;
    cout << "The quantity in TableSpoons is given as: " << TableSpoons << endl;
}
float TableSpoonsToOunces()
{
    float TableSpoons, Ounces;
    cout << "Enter the quantity in TableSpoons: " << endl;
    cin >> TableSpoons;
    Ounces = TableSpoons*2;
    cout << "The quantity in Ounces is given as: " << Ounces << endl;
}
float TableSpoonsToTeaSpoons()
{
    float TableSpoons, TeaSpoons;
    cout << "Enter the quantity in TableSpoons: " << endl;
    cin >> TableSpoons;
    TeaSpoons = TableSpoons/3;
    cout << "The quantity in TeaSpoons in given as: " << TeaSpoons <<endl;
}
float TeaSpoonsToTableSpoons()
{
    float TableSpoons, TeaSpoons;
    cout << "Enter the quantity in TeaSpoons: " << endl;
    cin >> TeaSpoons;
    TableSpoons = TeaSpoons * 3;
    cout << "The quantity in TableSpoons is given as: " <<TableSpoons << endl;
}
