#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double intrest_rate;
    double principal;
    double pay_per_year;
    double num_years;
    double payment;
    double numer, denom; // temporary work variables
    double extra_paid;
   double b, e; // base and exponent for call to pow()
   cout << "Enter Principal:  ";
   cin >> principal;
   cout << "Enter intrest rate:  ";
   cin >> intrest_rate;
   cout << " Enter number of payments a year:  ";
   cin >> pay_per_year;
   cout << "Enter number of years:  ";
   cin >> num_years;
   numer = intrest_rate*(principal/pay_per_year);
   b = (intrest_rate/pay_per_year)+1;
   e = -(pay_per_year*num_years);
   denom = 1 - pow(b, e);
   payment = numer/ denom;
   extra_paid = (payment*pay_per_year*num_years)-principal;
   cout << "Payment is going to be" << payment << "\n";
   cout << " Amount of intrest you have paid is " << extra_paid;

   return 0;

}
