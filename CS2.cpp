#include <iostream>
using namespace std;
class player
{
public:
    void teamSelection()
    {
        cout << "Select a Team!" << endl;
        cout << "Enter 1 for a team Terrorist " << endl;
        cout << "Enter 2 for a team Counter-Terrorist " << endl;
        int teamchoice;
        cin >> teamchoice;
        if (teamchoice == 1)
        {
            cout << "You have selected Team Terrorist" << endl;
            cout << "Player Created" << endl;
        }
        else if (teamchoice == 2)
        {
            cout << "You have selected Team Counter-Terrorist" << endl;
            cout << "Player Created" << endl;
        }
        else
        {
            cout << "Enter a Valid number" << endl;
            cout << "Player was not Created" << endl;
        }
    }
    void weaponsSelection()
    {
        int primaryweapon;
        int secondaryweapon;
        int meleeweapon;
        
    }
    player()
    {
        int health = 100;
        cout << "Player Health = " << health << endl;
    }
};
int main()
{
    player teamselection;
    teamselection.teamSelection();
    player p1;
}
