#include <bits/stdc++.h>
using namespace std;

int main (){
	int n; int k; cin >> n >> k;
	long long sum = 0; int res = 0;
	while (n != 0){
		while (n >= k){
			sum += n;
			res += n % k;
			n = n/k;
		}
		sum = sum + n;
		if (n + res >= k){
			n = n + res;
			res = 0;
			sum = sum - n;
		}
		else{
			n = n/k;
		}
	}
	cout << sum;
	return 0;
}