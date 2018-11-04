#include <iostream>
#include <vector>

using namespace std;

void mergeSort(vector<int>& v) {
	// 크기가 1이면 리턴
	if (v.size() < 2) return;
	int mid = v.size() / 2;
	// 왼쪽 반 벡터
	vector<int> lefthalf(v.begin(), v.begin() + mid);
	// 오른쪽 반 벡터
	vector<int> righthalf(v.begin() + mid, v.end());
	int p = lefthalf.size();
	int q = righthalf.size();

	// 분할 정복(Divide and Conquer)
	mergeSort(lefthalf);
	mergeSort(righthalf);

	int i, j, k;
	i = j = k = 0;

	// 분할된 배열을 검사해가면서 정렬
	while (i < p and j < q) {
		if (lefthalf[i] < righthalf[j]) {
			v[k] = lefthalf[i];
			i++;
		}
		else {
			v[k] = righthalf[j];
			j++;
		}
		k++;
	}

	// 왼쪽 벡터만 존재할시
	while (i < p) {
		v[k] = lefthalf[i];
		i++;
		k++;
	}

	// 오른쪽 벡터만 존재할시
	while (j < q) {
		v[k] = righthalf[j];
		j++;
		k++;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	vector<int> v;
	while (n--) {
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}
	mergeSort(v);
	for (int &i : v) printf("%d\n", i);

	return 0;
}