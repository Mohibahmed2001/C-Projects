#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
    char firstval[80];
    char secondval[80];
    cout <<"User please giveme  your first string";
    cin >> firstval;
    cout << "User give me your second string";
    cin >> secondval;
    for(int i=0;firstval[i];i++)
    {
        firstval[i] = toupper(firstval[i]);
    }
    for(int i=0;secondval[i];i++)
    {
        secondval[i] = toupper(secondval[i]);
    }
    if(!strcmp(firstval,secondval))
    {
        cout << "the two strings are equal yay";
    }
    return 0;
    
}
