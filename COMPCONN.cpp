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

int n,m;
vi adj[maxn+1];
int visited[maxn+1];
vi res;
vector<vector<int>>v;

void inp(){
	cin >> n >> m;
	f0 (i,m){
		int x,y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	//f1 (i,maxn) sort(all(adj[i]));
}

void dfs (int u){
	visited[u]=true;
	res.pb(u);
	for (int v : adj[u]){
		if (!visited[v]) dfs(v);
	}
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	inp();
	f1 (i,n){
		if (!visited[i]){
			dfs(i);
			v.pb(res);
			res.clear();
		}
	}
	cout << sz(v) << "\n";
	f0 (i,sz(v)){
		cout << sz(v[i]) << ' ';
		sort(all(v[i]));
		f0 (j,sz(v[i])){
			cout << v[i][j];
			if (j!=sz(v[i])-1) cout << ' ';
			else cout << "\n";
		}
	}
	return 0;
}