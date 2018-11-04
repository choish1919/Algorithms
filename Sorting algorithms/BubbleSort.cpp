#include <iostream>

using namespace std;

int num[1001] = { 0, };

void bubbleSort(int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 1; j < n; j++) {
			if (num[j - 1] > num[j]) swap(num[j - 1], num[j]);
		}
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	bubbleSort(n);

	for (int i = 0; i < n; i++) { cout << num[i] << endl; }

	return 0;
}