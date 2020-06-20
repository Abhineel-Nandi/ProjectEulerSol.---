#include "iostream.h"

using namespace std;

void main()
{
 int a,b,c;
 for (a=1; a<=1000; a++)
   {
   for (b=1; b<=1000-a; b++)
     {
     c=1000-(a+b);
     if ((a*a+b*b)==c*c)
	{
	if (a < b) {
   cout << "a= " << a << ", b = " << b << ", c= " << c << endl;
	cout << a*b*c << endl;
        }
	}
     }
   }
}