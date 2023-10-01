#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    char choice;
    int total=0;
    cout << " Please type period to end\n";
    do
    {
        cin >> choice;
        if(choice >= 'a'&& choice <='z')
        {
            choice -= (char)32;
            total++;
            cout << choice;
        }
        else if (choice >='A' && choice <='Z')
        {
            choice +=(char)32;
            total++;
            cout << choice;
        }
    } while (choice != '.');
cout << "\nCase changes is squal to " << total << "\n";
    
}
