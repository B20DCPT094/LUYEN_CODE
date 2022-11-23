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
#define maxn 1000

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;

int prime[maxn+1];

void sang(){
	for (int i=0; i<=maxn; i++)
		prime[i]=1;
	prime[0]=prime[1]=0;
	for (int i=2; i<=sqrt(maxn); i++){
		if (prime[i]){
			for (int j=i*i; j<=maxn; j+=i)
				prime[j]=0;
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	sang();
	string s; cin >> s;
	f0 (i,sz(s)){
		if (prime[i]) s[i]='*';
	}
	cout << s;
	return 0;
}