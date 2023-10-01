#include <iostream>
using namespace std;
#include <cmath>
// We will create XOR in C++
int main (){
    bool p , q;
    p = true;
    q= true;
    cout << p << " XOR " << q << " is " <<  ((p||q)&& !(p&&q)) << "\n";
     p = true;
    q= false;
    cout << p << " XOR " << q << " is " <<  ((p||q)&& !(p&&q)) << "\n";
     p = false;
    q= true;
    cout << p << " XOR " << q << " is " <<  ((p||q)&& !(p&&q)) << "\n";
     p = false;
    q= false;
    cout << p << " XOR " << q << " is " <<  ((p||q)&& !(p&&q)) << "\n";
}