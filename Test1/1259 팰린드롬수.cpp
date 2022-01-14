#include <iostream>
#include <string>
using namespace std;
// 문자열 입력, string 클래스
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	string s1, s2;
	
	while (true) {
		cin >> s;
		if (s == "0") {
			break;
		}
		else {
			for (int i = 0; i < s.length(); i++) {
				s1 += s[i];
			}
			for (int i = s.length() - 1; i >= 0; i--) {
				s2 += s[i];
			}
			if (s1 == s2) {
				cout << "yes" << endl;
			}
			else {
				cout << "no" << endl;
			}
		}
		s1.clear();
		s2.clear();
	}
}
