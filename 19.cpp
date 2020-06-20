#include <iostream>
using namespace std;
int main()
{
int  year = 1901, days =365, sum=0, i=6, count=0;
while(true)
{
	if(i+7 <= days)
	{
		if(year == 2000 || year%4 ==0)
		{
			if( i == 1 || i == 32|| i == 61 || i == 92 || i == 122 || i == 153 || i == 183 || i == 214
				|| i == 245 || i == 275 || i == 306 || i == 336)
				sum++;
		}
		else
		{
			if( i == 1 || i == 32 || i == 60 || i == 91 || i == 121 || i == 152 || i == 182 || i == 213
				|| i == 244 || i == 274 || i == 305 || i == 335)
				sum++;
		}
		i+=7;
	}
	else
	{
		int pdays = days;
		year++;
		if(year == 2000 || year%4 ==0)
			days = 366+(pdays -i);

		else 
			days = 365+(pdays -i);

		if((year-1) % 4 == 0)
			i = (-1) * (8-((i+7)-365));
		else if( (i+7)-365 == 8)
			i=1;
		else
			i=(i+7)-365;
	}
	if(year > 2000)
		break;
}	
cout << sum;
return 0;
}