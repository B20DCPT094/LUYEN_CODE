#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for (int i=0; i<n; i++) cin >> a[i];
	queue<int>q;
	for (int i=0; i<n; i++){
		vector<int>v;
		q.push(a[i]);
		while (!q.empty()){
			int top=q.front(); q.pop();
			v.push_back(top);
		}
		reverse(v.begin(),v.end());
		for (int x : v) q.push(x);
	}
	while (!q.empty()){
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}
