// file name big-O-1.cpp

// This program counts the number of times each loop is executed

// ======================= header files =====================
#include <iostream>        // for console I/O
using namespace std;       // for standard library

int main()
{
   int outer = 0;
   int inner1 = 0, inner2 = 0;
   int total = 0, inner11, inner21;
   int j, n, k, p;

   cout << "Enter the value of n: ";
   cin >> n;
   
   for (k = 1; k <= n; k++)
   {
      outer++;

      inner11 = 0;
      for (j = 1; j <= n * n; j++)
      {
         inner11++;
         inner1++;
      } // for j

      inner21 = 0;
      for (p = 1; p <= n; p++)
      {
         inner21++;
         inner2++;
      } // for p

      //cout << "inner1 is " << inner11 << endl;
      //cout << "inner2 is " << inner21 << endl;
   } // for k

   total = outer + inner1 + inner2;
   cout << "outer is " << outer << endl;
   cout << "inner loop 1 is " << inner1 << endl;
   cout << "inner loop 2 is " << inner2 << endl;
   cout << "inner total is " << total << endl;
}