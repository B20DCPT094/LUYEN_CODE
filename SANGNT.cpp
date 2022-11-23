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
#define maxn 1000001

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;

int p[maxn];

void sieve(){
	for (int i=1; i<maxn; i++)
		p[i]=1;
	p[0]=p[1]=0;
	for (int i=2; i<=sqrt(1000000); i++){
		if (p[i]){
			for (int j=i*i; j<maxn; j+=i)
				p[j]=0;
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	sieve();
	int n; cin >> n;
	for (int i=2; i<=n; i++) if (p[i]) cout << i << ' ';
	return 0;
}