//Name: Mohib Ahmed
//Email: mohib.ahmed79@myhunter.cuny.edu
//Date:  July 10,2023
//we are using ifs

#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "give me the month of your birthday\n";
    cin >> number;
    if(number >=11 || number < 3)
    {
        cout << "Happy Winter" << endl;
    }
    if(number >=3 && number < 7)
    { 
        cout << "Happy Spring"<<endl;
    }
    if(number >=7 && number < 9)
    {
        cout << "Happy Summer"<<endl;
    }
    if(number >=9 && number <11)
    {
        cout << "Happy Fall"<<endl;
    }


}