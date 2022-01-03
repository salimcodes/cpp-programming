#include <iostream>

using namespace std;

class TwitterAccount{
    public:

        string DisplayName;
        string Handle;
        int FollowersNumber;
        int FollowingNumber;

        TwitterAccount(string ADN, string AH, int AFollowersN, int AFollowingN)
        {
            DisplayName = ADN;
            Handle = AH;
            FollowersNumber = AFollowersN;
            FollowingNumber = AFollowingN;
        }
    };
int main()
{
    cout << "Hello world!" << endl;
    TwitterAccount Mine("Salim Oyinlola", "SalimOpines", 1284, 1045);
    cout << "My name is " << Mine.DisplayName << "." << endl;
    cout << "My Twitter Handle is " << Mine.Handle << "." << endl;
    cout << "I have " << Mine.FollowersNumber << " followers." << endl;
    cout << "I follow " << Mine.FollowingNumber << " other people." << endl;

    cout << endl;
    TwitterAccount loml("LeBron James", "KingJames", 50600000, 181);
    cout << "My name is " << loml.DisplayName << "." << endl;
    cout << "My Twitter Handle is " << loml.Handle << "." << endl;
    cout << "I have " << loml.FollowersNumber << " followers." << endl;
    cout << "I follow " << loml.FollowingNumber << " other people." << endl;
    return 0;

}
