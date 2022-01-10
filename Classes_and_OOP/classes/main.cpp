#include <iostream>

using namespace std;

class  Lecturers
{
    public:

        string name;
        string course;
        int level_taught;
        bool is_wicked;

    Lecturers(string aname, string acourse, int alevel_taught, bool ais_wicked)
    {
        name = aname;
        course = acourse;
        level_taught = alevel_taught;
        is_wicked = ais_wicked;
    }
};
int main()
{
    Lecturers my("Engr. Muhammed", "Computer Programming I", 300, true);
    cout << my.name << endl;


    return 0;
}
