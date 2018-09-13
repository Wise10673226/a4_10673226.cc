#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int dividend, divisor, remainder, a, b = 0;

    cout<< " This is a Program to determine the GCF or the GCD as you may preferably call it.... " << endl <<endl;

     cout << " Enter the First Number....";
     cin >> a ;
     cout<< endl << endl;


     cout << " Enter the Second Number... ";
     cin >> b ;
     cout << endl << endl;


     if ( a > b )
     {
        dividend = a;
        divisor =  b;
     }
     else
     {
         dividend = b;
         divisor = a;
     }

     do {
        remainder = dividend % divisor ;

        if (remainder != 0)
        {

            dividend = divisor;
            divisor = remainder;
        }
     }
     while(remainder != 0); 

     cout << " The GCF of " << a << " and " << b << " is: " << divisor  << endl << endl;


     return 0;
}
