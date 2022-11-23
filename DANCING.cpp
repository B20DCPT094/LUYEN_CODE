#include<bits/stdc++.h>
using namespace std;
main()
{
	int h;cin>>h;
	long long blue=0;
	long long red=0;
	long long dem=1;
    for(int i=1;i<=h;i++)
    {
    	blue+=dem;
    	if(i>=2&&i<h) red+=dem-2;
    	dem+=2;
	}
	cout<<blue-red<<' '<<red<<endl;
}