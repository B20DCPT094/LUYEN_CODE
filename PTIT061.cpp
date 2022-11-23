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

bool cmp (string a, string b){
	if (sz(a)==sz(b)) return a>b;
	return sz(a)>sz(b);
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int n; cin >> n;
	string s[n];
	vector <string> v;
	f0 (i,n){
		cin >> s[i];
		sort(s[i].begin(),s[i].end());
	}
	//f0 (i,n) cout << s[i] << ' ';
	f0 (i,n){
		string res=s[i];
		reverse(all(res));
		v.pb(res);
	}
	sort(all(v),cmp);
	for (string x : v) cout << x << " ";
	return 0;
}