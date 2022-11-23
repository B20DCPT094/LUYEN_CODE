int main() {
	long long A, B, C, D;
	cin >> A >> B >> C >> D;
	if (A > B)
		swap(A, B);
	if (C > D)
		swap(C, D);
	if (B < C || A > D)
		cout << "NO";
	else
		cout << "YES";

}