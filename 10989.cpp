#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int N, num[10010];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++) {
		int n;
		cin >> n;
		num[n]++;
	}
	for (int i = 1; i <= 10000; i++)
		for (int j = 0; j < num[i]; j++)
			cout << i << "\n";
	return 0;
}