#include <iostream>
/* At its closest point to Earth, Mars is approximately 34,000,000 miles away. Assuming there is someone on Mars that you want 
to talk with, what is the delay between the time a radio signal leaves Earth and the time it arrives on Mars? This project creates a program 
that answers this question. Recall that radio signals travel at the speed of light, approximately 186,000 miles per second. Thus, to 
compute the delay, you will need to divide the distance by the speed of light. Display the delay in terms of seconds and also in minutes.
*/
using namespace std;
int main()
{
   double distance;
   double lightspeed;
   double delay;
   double delayinmin;
   distance = 34000000;
   lightspeed = 186000;
   delay = (distance/ lightspeed)*2;
   delayinmin = ((distance/lightspeed)/60)*2;
   cout << " delay in seconds " << delay << "\n";
   cout << "Delay in mins " << delayinmin << "\n";
   return 0;
}
