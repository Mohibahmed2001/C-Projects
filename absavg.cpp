#include <iostream>
using namespace std;
int main()
{
    double val, avg;
    for(int i=0;i<5;i++)
    {
        cout<< "Give me value nerd\n";
        cin >> val;
        avg = avg + abs(val);

    }
    avg = avg/5;
    cout << avg << " This is the average";
}
