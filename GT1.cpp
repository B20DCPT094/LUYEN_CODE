#include <iostream>
using namespace std;

int main()
{
	long long n;
	long long temp = 1;
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		temp *= i;
	}
	cout << temp;
	return 0;
}