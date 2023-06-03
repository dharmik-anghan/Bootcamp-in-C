#include <iostream>
using namespace std;

class Player
{
    private:
        int player_no, no_of_matches;
        char player_name[100];
        int *goals;
    public:
        Player()
        {
            int i;
            cout<<"\n Enter Player No. : ";
            cin>>player_no;
            cout<<"\n Enter Player Name : ";
            cin>>player_name;
            cout<<"\n Enter No. of Matchers : ";
            cin>>no_of_matches;
            goals = new int[no_of_matches];
            for(i = 0; i <=no_of_matches-1; i++)
            {
                cout<<"\n Enter No. of Goals in Match "<<i+1<<" : ";
                cin>>goals[i];
            }
        }
        void display()
        {
            int i;
            cout<<"\n ----------------------------";
            cout<<"\n Player No. : "<<player_no;
            cout<<"\n Player Name : "<<player_name;
            cout<<"\n No. of Matches Played : "<<no_of_matches;
            for(i = 0; i <= no_of_matches-1; i++)
            {
                cout<<" \n Match "<<i+1<<" Goals : "<<goals[i];
            }
        }
};

int main()
{
    Player P;
    P.display();
    return 0;
}