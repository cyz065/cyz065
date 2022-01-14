#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	int K; int result = 0;
	cin >> K;
	stack<int> s;

	for (int i = 0; i < K; i++) {
		int tmp;
		cin >> tmp;
		if (tmp > 0) {
			s.push(tmp);
		}
		else {
			s.pop();
		}
	}

	while (s.empty() != true) {
		result += s.top();
		s.pop();
	}
	cout << result << endl;
}
