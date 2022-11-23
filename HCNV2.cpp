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
	ll ax,bx,cx,dx,ay,by,cy,dy; cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
	ll L=abs(ax-bx)+abs(dx-cx)-(max({ax,bx,cx,dx})-min({ax,bx,cx,dx}));
	ll R=abs(ay-by)+abs(cy-dy)-(max({ay,by,cy,dy})-min({ay,by,cy,dy}));
	if (L<=0 || R<=0) cout << 0;
	else{
		cout << L*R;
	}
	return 0;
}