// file name big-O-3.cpp

// This program counts the number of times each loop is executed

// ======================= header files =====================
#include <iostream>        // for console I/O
using namespace std;       // for standard library

int main()
{
   int outer = 0;
   int inner1 = 0, inner;
   int total;
   int j, k, n;

   cout << "Enter the value of n: ";
   cin >> n;

   k = 1;
   while (k <= n * n)
   {
      outer++;
      inner = 0;

      j = n;      
      while (j > 0)
      {
         j -= 3;

         inner++;
         inner1++;
         
      } // while j
      k++;

      cout << "inner is "  << inner << endl;
   } // while j


   total = outer + inner1;
   cout << "total is " << total << endl;
   cout << "outer is " << outer << endl;
   cout << "inner is " << inner1 << endl;
}