#include <iostream>
#include<cctype>
#include <cstring>
using namespace std;
int main()
{
    char liner[80] = "ThIs is A test";
    int count = 0;
    for (int i =0; i<liner[i];i++)
    {
        if(isupper(liner[i]))
        {
            count++;
        }
    }
cout <<"Number of uppper case letters are " << count;
return 0;
}