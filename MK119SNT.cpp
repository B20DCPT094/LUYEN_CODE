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

int prime[1000001];

void sang(){
	for (int i=0; i<=1000000; i++){
		prime[i]=1;
	}
	prime[0]=0; prime[1]=0;
	for (int i=2; i<=sqrt(1000000); i++){
		if (prime[i]){
			for (int j=i*i; j<=1000000; j+=i){
				prime[j]=0;
			}
		}
	}
	int cnt=0;
	for (int i=0; i<=1000000; i++){
		if (prime[i]) ++cnt;
		prime[i]=cnt;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	sang();
	int t; cin >> t;
	while (t--){
		int L,R; cin >> L >> R;
		cout << prime[R]-prime[L]+(prime[L-1]!=prime[L]) << "\n";
	}
	return 0;
}