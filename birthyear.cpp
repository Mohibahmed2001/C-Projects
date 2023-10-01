//Name: Mohib Ahmed
//Email: mohib.ahmed79@myhunter.cuny.edu
//Date:  July 10,2023
//we are using while

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout <<"Please give me a number before 2018\n";
    cin >> number;
    while(true)
    {
        if (number < 2018)
        {
            cout << "You entered " << number << endl;
            break;
        }
        else
        {
            cout << "You gave me a future year" << endl;;
            cout << "Please give me a number before 2018\n";
            cin >> number;
        }
    }
    return 0;
}
