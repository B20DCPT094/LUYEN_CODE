#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,s=0;
	cin>>a>>b;
	if(a%2==1) a=(a-1)/2;
	else a=a/2;
	if(b%2==1) b=(b+1)/2;
	else b=b/2;
	long long s1,s2;
	s1=((2+(a-1)*2)*a)/2;
	s2=((2+(b-1)*2)*b)/2;
	s=s2-s1;
	cout<<s;
	return 0;
}