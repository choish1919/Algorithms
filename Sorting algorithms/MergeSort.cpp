#include <iostream>
#include <vector>

using namespace std;

void mergeSort(vector<int>& v) {
	// ũ�Ⱑ 1�̸� ����
	if (v.size() < 2) return;
	int mid = v.size() / 2;
	// ���� �� ����
	vector<int> lefthalf(v.begin(), v.begin() + mid);
	// ������ �� ����
	vector<int> righthalf(v.begin() + mid, v.end());
	int p = lefthalf.size();
	int q = righthalf.size();

	// ���� ����(Divide and Conquer)
	mergeSort(lefthalf);
	mergeSort(righthalf);

	int i, j, k;
	i = j = k = 0;

	// ���ҵ� �迭�� �˻��ذ��鼭 ����
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

	// ���� ���͸� �����ҽ�
	while (i < p) {
		v[k] = lefthalf[i];
		i++;
		k++;
	}

	// ������ ���͸� �����ҽ�
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