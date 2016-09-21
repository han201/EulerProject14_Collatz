//////////// The answer is wrong!!  //////////////


/*
Longest Collatz sequence : Which starting number, under one million, produces the longest chain ?
https ://projecteuler.net/problem=14
	'''
*/
#include <iostream>
using namespace std;

// First define collatz funtion, that calculates the chain

// input coll MUST be 'long long int' to generate the correct answer. The answer becomes wrong after 500,000 
// even for 'long int' input.

int collatz(long long int coll) {
	int chain = 1;
	while (coll > 1) {
		if (coll % 2 == 0) {
			coll = coll / 2;
		}
		else {
			coll = 3 * coll + 1;
		}
	chain++;
	}
	return chain;
}

int main() {
	int maxlen = 1;     // Number of chains
	int	maxcoll = 1;   //the collatz number that generates the maximum chain
	for (int N=1; N < 1000000; N++) {
		int len = collatz(N);
		if (len > maxlen) {
			maxlen = len;
		    maxcoll = N;
			cout << maxcoll << " generates the maximum collatz chain length of " << maxlen << endl;
		}

	}
	
	system("pause");
	return 0;
}