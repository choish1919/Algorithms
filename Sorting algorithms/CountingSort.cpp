#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	scanf_s("%d", &n);
	int count[10001] = { 0, };
	while (n--) {
		int num;
		scanf_s("%d", &num);
		count[num]++;
	}
	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < count[i]; j++) {
			printf_s("%d\n", i);
		}
	}

	return 0;
}