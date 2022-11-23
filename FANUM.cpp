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
#define maxn 1000006

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;

int n,a[maxn],cnt[maxn],ma=-1e9,mi=1e9;

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int n; cin >> n;
	f1 (i,n){
		cin >> a[i];
		ma=max(ma,a[i]);
		mi=min(mi,a[i]);
		cnt[a[i]]++;
	}
	ll ans=0;
	for (int i=mi; i<=ma; i++){
		if (cnt[i]==1) ++ans;
	}
	cout << ans;
	return 0;
}