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

int revn (int n){
	int m=n, tmp=0;
	while (m){
		tmp=tmp*10+m%10;
		m/=10;
	}
	if (tmp==n) return 1;
	return 0;
}

int sum (int n){
	int ans=0;
	while (n){
		ans+=n%10;
		n/=10;
	}
	return ans%10==0;
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int l,r;
	while (cin >> l >> r){
		int cnt=0;
		for (int i=l; i<=r; i++){
			if (sum(i) && revn(i)) ++cnt;
		}
		cout << cnt << '\n';
	}
	return 0;
}