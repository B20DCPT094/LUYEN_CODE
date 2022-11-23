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
	int t; cin >> t;
	priority_queue <int> q;
	while (t--){
		string s; cin >> s;
		if (s!="-"){
			s=s.substr(1);
			//cout << s << '\n';
			if (sz(q)<15000) q.push(stoi(s));
		}else{
			int top=q.top();
			while (!q.empty() && q.top()==top) q.pop();
		}
	}
	set <int> s1;
	while (!q.empty()){
		s1.insert(q.top());
		q.pop();
	}
	vi v;
	for (int x : s1) v.pb(x);
	sort(all(v),greater<int>());
	cout << sz(v) << '\n';
	for (int x : v) cout << x << ' ';
	return 0;
}