#include <iostream>
using namespace std;

int main(){
    double feet; double meter; int counter;
    counter = 0;
    for (feet=1.0; feet<=100.0;feet++)
    {
        meter = feet/3.28;
        cout << feet << " is equal to " << meter << " meters.\n";
        counter ++;
        if (counter == 25)
        {
            cout << "\n";
            counter =0;
        }
    }
    return 0;

    }
     