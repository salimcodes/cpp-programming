//Code written by Salim O. Oyinlola. 
#include <iostream>

using namespace std;

int main()
{
    int num; // Integer datatype to store the number being inputed by the user
    bool again = true; // Boolean datatype to store if the 'do you want to go again' status of the user
    string answer; //String the stores the answer to 'again' in Yes or No format
    do
    {
        cout << "Input your number (Integer between 0 and 100): " << endl;
        cin >> num;
        if(num > 0 && num < 10)
            cout << "ONE DIGIT BIG!" << endl;
        else if(num > 9 && num < 100)
            cout << "TWO DIGITS BIG!" << endl;
        else
            cout << "OUT OF RANGE" << endl;
        cout << "Do you want to perform that again? (Y OR N)" << endl;
        cin >> answer;
        if(answer == "Y" || answer == "y")
            again = true;
        else
            again = false;
    }
    while(again == true);

    cout << "Thank you! " << endl;

    return 0;
}
