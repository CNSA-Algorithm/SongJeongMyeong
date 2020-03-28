#include <iostream>
using namespace std;

int jeo[15];

int dp(int N) {
	jeo[0] = 1;
	jeo[1] = 1;
	jeo[2] = 2;
	if (jeo[N] != 0)
		return jeo[N];
	else
		return jeo[N] = dp(N - 1) + dp(N - 2) + dp(N - 3);
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int T, n;
	cin >> T;
	while (T--) {
		cin >> n;
		cout << dp(n) << endl;
	}
	return 0;
}