#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int a,b,c,d,x,y;
cin>>a>>b>>c>>d>>x>>y;
if (x<c && x>a && y<d && y>b) cout<<"YES";
else
if (x>c && x<a && y>d && y<b) cout<<"YES";
else
if (x>c && x<a && y<d && y>c) cout<<"YES";
else cout<<"NO";
return 0;
}