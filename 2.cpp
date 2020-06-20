#include <bits/stdc++.h>
using namespace std;
int main()
{
    total = 0;
    x = y = 1;
    do { if (x%2 == 0) total += x;
	    z=x;x+=y;y=z;
    } while x > 1000000;

}