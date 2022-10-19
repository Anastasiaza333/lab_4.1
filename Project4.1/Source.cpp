#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double P;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	P = 1;
	i = k;
	while (i <= N)
	{
		P += (k / i + i / N);
		i++;
	}
	cout << "P=" << P << endl;
	P = 1;
	i = k;
	do {
		P += (k / i + i / N);
		i++;
	} while (i <= N);
	cout << "P=" << P << endl;
	P = 1;
	for (i = k; i <= N; i++)
	{
		P += (k / i + i / N);
	}
	cout << "P=" << P << endl;
	P = 1;
	for (i = N; i >= k; i--)
	{
		P += (k / i + i / N);
	}
	cout << "P=" << P << endl;
	return 0;
}