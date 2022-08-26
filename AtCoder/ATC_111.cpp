#include <bits/stdc++.h>
using namespace std;

int bigMod(int a, int b, int c)
{
	// Base cases
	if (a == 0)
		return 0;
	if (b == 0)
		return 1;

	// If B is even
	long y;
	if (b % 2 == 0) {
		y = bigMod(a, b / 2, c);
		y = (y * y) % c;
	}

	// If B is odd
	else {
		y = a % c;
		y = (y * bigMod(a, b - 1, c) % c) % c;
	}

	return (int)((y + c) % c);
}

int main()
{
	int a = 10, b,m, c = 10e18;
	cin>>b>>m;
	cout << (bigMod(a, b, c)/m)%m <<endl;
	return 0;
}

