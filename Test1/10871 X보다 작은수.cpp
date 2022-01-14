#include <iostream>

using namespace std;

int main(void) {
	int N, X, length = 0; int idx = 0;
	cin >> N >> X;
	int* arr = new int[N];
	int* small = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++) {
		if (arr[i] < X) {
			small[idx] = arr[i];
			idx += 1;
			length += 1;
		}
	}

	for (int i = 0; i < length; i++) {
		cout << small[i] << " ";
	}
}