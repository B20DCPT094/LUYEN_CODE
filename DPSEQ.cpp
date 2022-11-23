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
#define maxn 10001

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;

int n,k,dp[maxn];

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	cin >> n >> k;
	int m1=dp[0];
	f1 (i,n){
		int m2=dp[max(0,i-k)];
		for (int j=max(0,i-k)+1; j<i; j++)
			m2=max(m2,dp[j]);
		int x; cin >> x;
		dp[i]=m2+x;
		m1=max(m1,dp[i]);
	}
	cout << m1;
	return 0;
}