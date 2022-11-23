#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define sz(a) int((a).size())
#define f0(i,n) for (int i=0; i<n; i++)
#define f1(i,n) for (int i=1; i<=n; i++)
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define maxn

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	double a,b,c,d,e,f; cin >> a >> b >> c >> d >> e >> f;
	double D=a*e-b*d, Dx=c*e-b*f, Dy=a*f-c*d;
	if (D!=0){
		double x=Dx/D, y=Dy/D;
		if (x==-0.0) x=fabs(x);
		if (y==-0.0) y=fabs(y);
		cout << fixed << setprecision(2) << x << " " << y;
	}else{
		if (Dx==0 && Dy==0) cout << "VOSONGHIEM";
		else if (Dx!=0 || Dy!=0) cout << "VONGHIEM";
	}
	return 0;
}