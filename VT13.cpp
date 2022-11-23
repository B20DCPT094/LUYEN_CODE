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

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int n; cin >> n;
	int a[n];
	for (int i=0; i<n; i++) cin >> a[i];
	int ans=a[0]+a[n-1],idx1=n-1,idx2=0;
	for (int i=0; i<n-1; i++){
		if (a[i]+a[i+1]>=ans){
			ans=a[i]+a[i+1];
			idx1=i;
			idx2=i+1;
		}
	}
	//cout << idx1 << " " << idx2 << "\n";
	cout << a[idx1] << " " << a[idx2];
	return 0;
}