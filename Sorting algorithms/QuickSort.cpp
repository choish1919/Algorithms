#include <iostream>
#include <vector>

using namespace std;

void quickSort(vector<int>& v, int left, int right) {
	// 크기가 1이면 리턴
	if (right - left <= 0) return;
	// left를 피벗으로 선정
	int pivot = left;
	// left+1 부터 오른쪽으로 탐색
	int l = left + 1;
	// right 부터 왼쪽으로 탐색
	int r = right;

	// l과 r이 엇갈릴때까지
	while (l <= r) {
		// 왼쪽에서 피벗보다 큰게 탐색될때까지 l 증가
		while (l <= right && v[pivot] >= v[l]) l++;
		// 오른쪽에서 피벗보다 작은게 탐색될때까지 r 증가
		while (r > left && v[pivot] <= v[r]) r--;
		// l과 r이 엇갈리지 않으면 l과 r 스왑
		if (l <= r) swap(v[l], v[r]);
		// 엇갈리면 피벗과 교체
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