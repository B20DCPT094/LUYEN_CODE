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
#define maxn 101

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;

int n,m,a[maxn][maxn],ans;

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	cin >> n >> m;
	f1 (i,n) f1 (j,m) cin >> a[i][j];
	for (int i=0; i<=m; i++) a[0][i]=a[n+1][i]=-1e9;
	for (int j=2; j<=m; j++){
		for (int i=1; i<=n; i++)
			a[i][j]+=max({a[i-1][j-1],a[i][j-1],a[i+1][j-1]});
	}
	ans=a[1][m];
	for (int i=2; i<=n; i++) ans=max(ans,a[i][m]);
	cout << ans;
	return 0;
}