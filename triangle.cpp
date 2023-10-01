//Name: Mohib Ahmed
//Email: mohib.ahmed79@myhunter.cuny.edu
//Date:  July 10,2023
//Use for loop
#include<iostream>
using namespace std;
int main()
{
    int triangles;
    cout << "How many tiranlges\n";
    cin >> triangles;
    for (int i =0;i<=triangles;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}