//Code written by Salim O. Oyinlola
#include <iostream>

using namespace std;




int main()
{
    int DayNo, MonNo, YearNo;
    int Thirty_Days[4] = {4, 6, 9, 11}; //On a second glance, this line of code seems useless

    //I inititally planned to use the array method but later changed my mind
    // I left the code there nonetheless so as to expose us to the thought processs whilst writing codes

    cout << "Enter Month of the year: (Given Jan: 01, Feb: 02) " << endl;
    cin >> MonNo;
    if(MonNo <= 0 ||  MonNo >= 13) //To ensure the number months does not exceed 12 and is not less than one.
        cout << "Not Valid" << endl;
    else
        MonNo = MonNo; //Literally spells out, MOVE ON if the condition is met.



    cout << "Enter Day of the month: " << endl;
    cin >> DayNo; // Allowing the user input the day of the month

    cout << "Enter Year: " << endl;
    cin >> YearNo; //Allowing the user's input the year

    // Making room for the maximum number of days a month can have
    if (DayNo >= 32)
        cout << "Not Valid"  << endl;
    // Making room for 30-day months
    else if ((DayNo >= 31 && MonNo == 4) || (DayNo >= 31 && MonNo== 6)|| (DayNo >= 31 && MonNo == 9) || (DayNo >= 31 && MonNo == 11))
        cout << "Not Valid"  << endl;
    // Making Provision for February
    else if((MonNo == 2 && DayNo > 28 && YearNo % 4 != 0 ) || (MonNo == 2 && DayNo > 29 && YearNo % 4 == 0))
        cout << "Not Valid!" << endl;
    int MakeLeapYearRoom = 1;
    if (MonNo > 2 && YearNo % 4 == 0)
        MakeLeapYearRoom =+ 1;

    int NumOfDays = 0; //Setting initial number of days
    if(MonNo == 1)
        NumOfDays += DayNo; 
    else if(MonNo == 2)
    {
        NumOfDays = NumOfDays +  (DayNo+ 31);
    }
    else if(MonNo == 3)
    {
        NumOfDays += DayNo; //Recall the meaning of the += operation
        NumOfDays += 31 + 28;
    }
    else if(MonNo == 4)
    {
        NumOfDays += DayNo+ 31 + 28 + 31;
    }
    else if(MonNo == 5)
    {
        NumOfDays += DayNo+ 31 + 28 + 31 + 30;
    }
    else if(MonNo == 6)
    {
        NumOfDays += DayNo+ 31 + 28 + 31 + 30 + 31;
    }
    else if(MonNo == 7)
    {
        NumOfDays += DayNo+ 31 + 28 + 31 + 30 + 31 +30;
    }
    else if(MonNo == 8)
    {
        NumOfDays += DayNo+31 + 28 + 31 + 30 + 31 +30 + 31;
    }
    else if(MonNo == 9)
    {
        NumOfDays += DayNo;
        NumOfDays += 31 + 28 + 31 + 30 + 31 +30 + 31 +31;
    }
    else if(MonNo == 10)
    {
        NumOfDays += DayNo;
        NumOfDays += 31 + 28 + 31 + 30 + 31 +30 + 31 + 31 + 30;
    }
    else if(MonNo == 11)
    {
        NumOfDays += DayNo;
        NumOfDays += 31 + 28 + 31 + 30 + 31 +30 + 31 + 31 + 30 + 31;
    }
    else if(MonNo == 12)
    {
        NumOfDays += DayNo;
        NumOfDays += 31 + 28 + 31 + 30 + 31 +30 + 31 + 31 + 30 + 31 + 30;
    }



    cout << "The total number of days is given as:\t" << NumOfDays << endl;

}

