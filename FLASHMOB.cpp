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

int used[50];

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int C,n; cin >> C >> n;
	used[C]=1;
	int ans=1;
	pi a[n];
	f0 (i,n) cin >> a[i].fi >> a[i].se;
	f0 (i,n){
		if (a[i].se==C){
			C=a[i].fi;
			if (!used[C]){
				used[C]=1;
				++ans;
			}
		}
	}
	cout << C << " " << ans;
	return 0;
}