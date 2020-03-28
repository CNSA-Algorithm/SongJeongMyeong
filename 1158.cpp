#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <list>
using namespace std;

list<int> l;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, K, num = 0, check = 1;
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
		l.push_back(i);
	cout << "<";
	while (check) {
		for (list<int>::iterator iter = l.begin(); iter != l.end(); iter++) {
			if (l.size() == 1) {
				cout << *l.begin() << ">";
				check = 0;
				break;
			}
			num++;
			if (num == K) {
				num = 0;
				cout << *iter << ", ";
				iter = l.erase(iter);
				if(l.size()!=1)
					iter--;
			}
		}
	}
	return 0;
}