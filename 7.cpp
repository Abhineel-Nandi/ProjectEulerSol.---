#include <stdio.h>
#include <math.h>

#define	divisible(x, y)		!(remainder((x),(y)))

/* Find the 10001th prime number */

int main(int argc, char *argv[]) {
	double nthPrime(double n);
	printf("--- %.1f\n", nthPrime(10001.0));
	return 0;
}

double nthPrime(double n) {
	int prime(double n);
	register double primes = 1;
	register double d = 1;
	if(n == 1)
		return 2;
	while(primes < n) {
		d += 2;
		if(prime(d))
			primes++;
	}
	return d;
}

int prime(double n) {
	double sqrt(double x);
	register double d = 3;
	register rt;
	if(n < 2)
		return 0;
	if(n == 2)
		return 1;
	if(divisible(n, 2))
		return 0;
	rt = sqrt(n);
	while(d <= rt) {
		if(divisible(n, d))
			return 0;
		d += 2;
	}
	return 1;
}