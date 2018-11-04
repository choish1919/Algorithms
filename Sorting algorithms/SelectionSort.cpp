#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& v) {
	for (int i = 0; i < v.size() - 1; i++) {
		// i�� �ӽ������� �ּҰ� �ε����� ����
		int min = i;
		for (int j = i + 1; j < v.size(); j++) {
			// Ž���ϸ鼭 �ּڰ� �߽߰� �ε��� ����
			if (v[min] > v[j]) min = j;
		}
		swap(v[min], v[i]);
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> v;
	while (n--) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	selectionSort(v);
	for (int &i : v) {
		cout << i << endl;
	}

	return 0;
}