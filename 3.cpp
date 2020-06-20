#include <iostream>

inline bool isprime(const __int64 number)
{
	static __int64 i;
	if(!(number % 2))
		return false;
	for(i = 3; i*i <= number; i += 2)
		if(!(number % i))
			return false;
	return true;
}

int main()
{
	const __int64 number = 317584931803;
	__int64 max = 0;
	for(__int64 i = 3; i*i <= number; i += 2)
	{
		if(!(number % i))
			if(isprime(i))
				max = i;
	}
	std::cout << max;
	return 0;
}