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

int uutien (char c){
	if (c=='^') return 3;
	if (c=='*' || c=='/') return 2;
	if (c=='+' || c=='-') return 1;
	return 0;
}

void solve(string s){
	string res="";
	stack<char>st; //luu toan tu va dau dong mo ngoac
	for (int i=0; i<s.size(); i++){
		if (isalpha(s[i])) res+=s[i];
		else if (s[i]=='(') st.push(s[i]);
		else if (s[i]==')'){
			while (!st.empty() && st.top()!='('){
				res+=st.top();
				st.pop();
			}
			st.pop(); //xoa bo dau mo ngoac tuong ung
		}else{ 
			//khi gap toan tu
			while (!st.empty() && uutien(s[i])<=uutien(st.top())){
				res+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}
	}
	while (!st.empty()){
		res+=st.top();
		st.pop();
	}
	cout << res << endl;
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		solve(s);
	}
	return 0;
}