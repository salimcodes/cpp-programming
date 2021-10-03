#include <iostream>

using namespace std;
/*
Write a complete C++ program that asks the user for a number between 0 and
100 (0 and 100 are out of range). If the number is between 1 and 9, write out the
words ONE DIGIT BIG! If it is between 10 and 99, write out the words TWO
DIGITS BIG! If the user’s number is outside the requested range write the
phrase OUT OF RANGE. Your program should use an if–else/if–else
control structure, not three individual if statements.
*/
int main()
{
    int num;
    bool again = true;
    string answer;
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
