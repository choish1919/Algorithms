#include <iostream>
#include <vector>

using namespace std;

void quickSort(vector<int>& v, int left, int right) {
	if (v.size() < 2) return;
	int pivot = (left + right) / 2;
	int l = left;
	int r = right;

	while (l <= r) {
		while (v[pivot] >= v[l]) l++;
		while (v[pivot] <= v[r]) r--;
		if (l != r) swap([v[l], v[r]);

		for (int &i : v) cout << i << ' ';
		cout << endl;

		if (left < r) quickSort(v, left, r);
		if (right < l) quickSort(v, l, right);
	}

}

int main() {
	int n;
	vector<int> v;
	scanf("%d", &n);
	while (n--) {
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}

	quickSort(v, 0, v.size());
	for (int &i : v) printf("%d\n", i);

	return 0;
}