#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int N, num[1000010], temp[1000010];

void merge(int left, int right) {
	int mid = (left + right) / 2;
	int i = left;
	int j = mid + 1;
	int k = left;
	while (i <= mid && j <= right) {
		if (num[i] <= num[j])
			temp[k++] = num[i++];
		else
			temp[k++] = num[j++];
	}
	if (i > mid)
		while (j <= right)
			temp[k++] = num[j++];
	else
		while (i <= mid)
			temp[k++] = num[i++];
	for (int i = left; i <= right; i++)
		num[i] = temp[i];
}

void jjogaegi(int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		jjogaegi(left, mid);
		jjogaegi(mid + 1, right);
		merge(left, right);
	}
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> num[i];
	jjogaegi(0, N-1);
	for (int i = 0; i < N; i++)
		cout << num[i] << "\n";
	return 0;
}