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

struct HS{
	string name;
	int d1, d2, d3;
};

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int n; cin >> n;
	HS a[n];
	cin.ignore();
	f0 (i,n) getline(cin,a[i].name);
	f0 (i,n) cin >> a[i].d1;
	f0 (i,n) cin >> a[i].d2;
	f0 (i,n) cin >> a[i].d3;
	int ans=0;
	f0 (i,n) ans=max(ans,a[i].d1+a[i].d2+a[i].d3);
	f0 (i,n){
		if (a[i].d1+a[i].d2+a[i].d3==ans) cout << a[i].name << ' ' << a[i].d1 << ' ' << a[i].d2 << ' ' << a[i].d3 << '\n';
	}
	return 0;
}