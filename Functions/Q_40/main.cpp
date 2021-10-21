#include <iostream>
#include<cmath>

using namespace std;
/*
Our C++ programmer built a cabin in the mountains that she visits when she
needs to get away from the computer. She placed a black, spherical tank on the
hill above her house to provide water for dishes, bathing, etc. (Solar heating!) The
water is captured on the roof during rainstorms (she has a very tall cabin ) and the
water drains into the tank. Use a function to ask the user to enter the radius of
the tank. Pass this value to CalculateTankVolume to obtain total number of gallons
in the tank. Ask the user for the rate of flow she experiences using this gravity
fed system by calling AskFlowRate.(We’ll assume it is a constant flow rated in
gallons per hour.) Pass the total gallons and flow rate to the Usage function that
determines the total number of hours and minutes of water available when the
tank is full.Write the water availability, total gallons and flow rate from usage.
*/


// Assuming the height to be 10 feet

//Initializing functions

float AskRadius();
float CalculateTankVolume(float );
float AskFlowRate();
float Usage(float , float);

int main()
{
    float rad, vol, rate;
    rad = AskRadius();
    vol = CalculateTankVolume(rad);
    rate = AskFlowRate();
    Usage(vol, rate);
    return 0;
}


float AskRadius()
{
    float radius;
    cout << "Enter the Radius of the tank in feet: " << endl;
    cin >> radius;
    return radius;
}

float CalculateTankVolume(float rad_1)
{
    float volume;
    volume = (22*rad_1*rad_1*10)/7; //Assuming height as 10 feet
    volume = volume/7.481; //Since 1 cubic foot equal 7.481 US liquid gallons
    return volume;
}

float AskFlowRate()
{
    float FlowRate;
    cout << "Enter the Rate of flow in gallons per hour: " << endl;
    cin >> FlowRate;
    return FlowRate;
}

float Usage(float volume, float rate)
{
    float time, time_in_hours, time_in_minutes;
    time = volume/rate;
    time_in_hours = floor(time);
    time_in_minutes = time - time_in_hours;
    time_in_minutes = time_in_minutes * 60;
    time_in_minutes = ceil(time);
    cout << "The time used is given as: " << time_in_hours << " hours and " << time_in_minutes << " minutes." << endl;
}
