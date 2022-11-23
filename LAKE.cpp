#include <bits/stdc++.h>
using namespace std;

using namespace std;
using ll = long long;
int m, n, k;
const int maxN = 10001;
int a[101][101];
bool visited[101][101];
int dR[] = {-1, 0, 1, 0};
int dC[] = {0, 1, 0, -1};
int biggestLake = 0;
int ans = 0;

bool isLegalMove(int r, int c) {
if(r < 1 || c < 1 || r > m || c > n) return false;
if(visited[r][c]) return false;
if(a[r][c] != 1) return false;// if there is no water at all
return true;
}

void BFS(int i, int j) {
if(a[i][j] == 0) {
visited[i][j] = true;
return;
}
queue<pair<int, int>> Q;
Q.push({i, j});
visited[i][j] = true;
ans++;
while(!Q.empty()) {
int uX = Q.front().first;
int uY = Q.front().second;
Q.pop();
for(int i = 0; i < 4; i++) {
int vX = uX + dR[i];
int vY = uY + dC[i];
if(isLegalMove(vX, vY)) {
Q.push({vX, vY});
visited[vX][vY] = true;
ans++;
}
}
}
}

void solve() {
for(int i = 1; i <= m; i++) {
for(int j = 1; j <= n; j++) {
if(!visited[i][j]) {
BFS(i, j);
biggestLake = max(biggestLake, ans);
ans = 0;
}
}
}
}

void input() {
cin >> m >> n >> k;
for(int i = 0; i < k; i++) {
int x, y; cin >> x >> y;
a[x][y] = 1;
visited[x][y] = false;
}
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	input();
	solve();
	cout << biggestLake;
	return 0;
}