#include <iostream>
using namespace std;

int main(void) {
	/*
		cin, cout�� scanf, printf���� �ӵ��� ������ ������
		cin�� cout�� �ӵ��� ����Ű�� ���� ���
		������ C�� �⺻ ����� scanf, getchar, printf�� ���� ����� �� ����.
		���� https://ip99202.github.io/posts/%EC%9E%85%EC%B6%9C%EB%A0%A5-%EC%86%8D%EB%8F%84-%EC%A4%84%EC%9D%B4%EA%B8%B0/
	*/
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long S, K = 0;
	long long result = 1;
	cin >> S >> K;
	int a, b;
	a = S / K; b = S % K;

	int tmp = K - b;
	for (int i = 0; i < tmp; i++) {
		result *= a;
	}
	for (int i = 0; i < b; i++) {
		result *= (a + 1);
	}
	cout << result << '\n';
}