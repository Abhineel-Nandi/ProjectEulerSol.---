bool IsSol(unsigned a, unsigned b, unsigned c)
{
	char vec[]="0000000000";
	while(a){
		if(a%10==0 || ++vec[a%10]>'1')
			return false;
		a/=10;
	}
	while(b){
		if(++vec[b%10]>'1')
			return false;
		b/=10;
	}
	while(c){
		if(++vec[c%10]>'1')
			return false;
		c/=10;
	}
	if(strcmp(vec, "0111111111")==0)
		return true;
	return false;
}

bool IsPandigit(const unsigned nNr)
{
	unsigned nMax = sqrt((float)nNr)+1;

	for(unsigned a=2; a<nMax; a++){
		unsigned b=nNr/a;
		if(nNr%a==0){
			if(IsSol(nNr, a, b)){
				std::cout << nNr << " = " << a << " * " << b;
				return true;
			}
		}
	}
	return false;
}


int _tmain(int argc, _TCHAR* argv[])
{
	unsigned nSum=0;
	for(unsigned i=1; i<10000; i++){
		if(IsPandigit(i)){
			nSum+=i;
			std::cout << " Sum:"<< nSum << std::endl;
		}
	}

	getch();
	return 0;
}