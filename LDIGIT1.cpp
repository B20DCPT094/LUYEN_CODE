#include <bits/stdc++.h>
using namespace std;

long long a[5]={1,1,2,6,4};

long long mu2(long long n){
	if(n%4==0) return 6;
	if(n%4==1) return 2;
	if(n%4==2) return 4;
	if(n%4==3) return 8;
}
long long cstc(long long n){
	if(n<2) return 1;
	else{
	    return (mu2(n/5)*cstc(n/5)*a[n%5])%10;
	}
	return n;
}

int main() {
	ios_base::sync_with_stdio();cin.tie(0);
    long long n;cin >>n;
	cout<<cstc(n);
	return 0;
}