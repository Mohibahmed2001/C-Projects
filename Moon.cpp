#include <iostream>
using namespace std;
int main(){
    double moon;
    double earth = 1;
    int counter = 0;
    for(int i=0;i<100;i++)
    {
        moon = earth *.17;
        cout << moon << " is equal to this many earth lbs " << earth << "\n";
        earth++;
        counter++;
        if( counter == 25)
        {
            cout << "\n";
            counter =0;
        }
    }
}