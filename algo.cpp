//Name: Mohib Ahmed
//Email: mohib.ahmed79@myhunter.cuny.edu
//Date:  July 10,2023
//we are using a formula to get population
#include <iostream>
using namespace std;
int main()
{
    int number;
    int x;
    cout << "Please give mea number\n";
    cin >> number;
    if(number <0)
    {
        x= 32+number;
        cout <<"1";
    }
    else
    {
        x=number;
        cout <<"0";
        
    }
    int b =16;
while (b > 0.5) 
{
        if (x >= b) 
        {
            cout << "1";
            x %= b;
        } else 
        {
            cout << "0";
        }
        b /= 2;
    }

    cout << endl;

    return 0;
}