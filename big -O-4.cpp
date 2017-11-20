// file name big-O-4.cpp

// This program counts the number of times each loop is executed

// ======================= header files =====================
#include <iostream>        // for console I/O
using namespace std;       // for standard library

int main()
{
   int outer = 0;
   int inner1 = 0, inner;
   int total;
   int j, k, n, m;

   cout << "Enter the value of n: ";
   cin >> n;

   j = 1;
   while (j < n)
   {
      outer++;
      inner = 0;

      for (m = 1; m <= n; m++)
      {
         m += n / 2;

         inner++;
         inner1++;         
      } // for m

      j += 2;

      cout << "inner is "  << inner << endl;
   } // while j


   total = outer + inner1;
   cout << "total is " << total << endl;
   cout << "outer is " << outer << endl;
   cout << "inner is " << inner1 << endl;
}