#include <iostream>
using namespace std;

int main(void) {
	/*
		cin, cout은 scanf, printf보다 속도가 느리기 때문에
		cin과 cout의 속도를 향상시키기 위해 사용
		하지만 C의 기본 입출력 scanf, getchar, printf를 같이 사용할 수 없다.
		참고 https://ip99202.github.io/posts/%EC%9E%85%EC%B6%9C%EB%A0%A5-%EC%86%8D%EB%8F%84-%EC%A4%84%EC%9D%B4%EA%B8%B0/
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