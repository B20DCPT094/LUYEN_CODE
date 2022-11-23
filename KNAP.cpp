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
#define maxn 10000

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;

int n,M,w[maxn+1],c[maxn+1],dp[maxn+1][maxn+1];

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	cin >> n >> M;
	f1 (i,n) cin >> w[i] >> c[i];
	f1 (i,n) dp[0][i]=0;
	f1 (i,n){
		f1 (j,M){
			dp[i][j]=dp[i-1][j];
			if (j>=w[i])
				dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+c[i]);
		}
	}
	cout << dp[n][M];
	return 0;
}