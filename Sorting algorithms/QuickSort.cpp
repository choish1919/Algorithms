#include <iostream>
#include <vector>

using namespace std;

void quickSort(vector<int>& v, int left, int right) {
	// ũ�Ⱑ 1�̸� ����
	if (right - left <= 0) return;
	// left�� �ǹ����� ����
	int pivot = left;
	// left+1 ���� ���������� Ž��
	int l = left + 1;
	// right ���� �������� Ž��
	int r = right;

	// l�� r�� ������������
	while (l <= r) {
		// ���ʿ��� �ǹ����� ū�� Ž���ɶ����� l ����
		while (l <= right && v[pivot] >= v[l]) l++;
		// �����ʿ��� �ǹ����� ������ Ž���ɶ����� r ����
		while (r > left && v[pivot] <= v[r]) r--;
		// l�� r�� �������� ������ l�� r ����
		if (l <= r) swap(v[l], v[r]);
		// �������� �ǹ��� ��ü
		else swap(v[pivot], v[r]);
	}

	quickSort(v, left, r - 1);
	quickSort(v, r + 1, right);
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

	quickSort(v, 0, v.size() - 1);
	for (int &i : v) printf("%d\n", i);

	return 0;
}