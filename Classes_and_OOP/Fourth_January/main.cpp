#include <iostream>

using namespace std;

class Player{
    public:
        string name;
        string team;
        int jersey_number;
        int draft_round;
        int draft_number;

    Player(string aname, string ateam, int ajersey_number, int adraft_round, int adraft_number)
    {
        name = aname;
        team = ateam;
        jersey_number = ajersey_number;
        draft_round = adraft_round;
        draft_number = adraft_number;
    }
};
int main()
{
    Player player1("LeBron James", "LA Lakers", 6, 1, 1);
    Player player2("Kevin Durant", "Brooklyn Nets", 7, 1, 2);
    cout << "My name is " << player1.name << " and I play for "<< player1.team << "." << endl;
    cout << "My name is " << player2.name << " and I play for "<< player2.team << "." << endl;
    return 0;
}
