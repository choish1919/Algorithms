#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& v) {
	for (int i = 1; i < v.size(); i++) {
		// 현재 값
		int cur = v[i];
		int j = i - 1;
		// 현재 값이 v[j] 보다 작으면
		while (j >= 0 && v[j] > cur) {
			// 한칸 밀어내고
			v[j + 1] = v[j];
			// 왼쪽으로 계속 탐색
			j--;
		}
		// 모든 탐색이 끝나면 현재값을 j+1로 삽입(j는 왼쪽의 비교할 인덱스이므로)
		v[j + 1] = cur;
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

	insertionSort(v);
	for (int &i : v) printf("%d\n", i);

	return 0;
}