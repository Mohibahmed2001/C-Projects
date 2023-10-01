//Name: Mohib Ahmed
//Email: mohib.ahmed79@myhunter.cuny.edu
//Date:  July 10,2023
//we are using a formula to get population
#include <iostream>
using namespace std;
int main()
{
    int numyears;
    int years =2017;
    cout << "PLease give me number of years\n";
    cin >> numyears;
    double pop =325.7;
    cout << "Population of 2017 is " << pop << endl;
    for (int i =1;i<numyears;i++)
    {
        pop = pop + ((0.0124*pop)-(0.0084*pop));
        years += 1;
        cout << "Year "<<years<< " is " << pop << endl;
    }
    return 0;
}
