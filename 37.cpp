#include<iostream>
using namespace std;
int main(){

char buff[16];
long  i, count=0, temp=0, sum=0;
bool f1=1, f2=1;
for(i=11; i< INT_MAX; i+=2)
{
	if(isprime(i))
	{
		ltoa(i, buff, 10);
		for(int k=0; k< strlen(buff)-1; k++)
		{
			buff[k] = '0';
			temp = atol(buff);
			if(!isprime(temp))
			{
				f1 = 0; 
				break;
			}
		}
		ltoa(i, buff, 10);
		for(int k=strlen(buff)-1; k>= 1; k--)
		{
			buff[k] = '\0';
			temp = atol(buff);
			if(!isprime(temp))
			{
				f2 = 0; 
				break;
			}
		}
		if(f1&&f2)
		{
			count++; 
			sum+=i; 
			if(count == 11)
			{
				cout << sum;
				return sum;
			}
		}
	}
	f1=f2=1;
}	
return 0;
}