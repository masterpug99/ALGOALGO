#include <iostream>
#include <string>
/*
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	string s;
	cin >> n >> m >> s;
	int answer = 0;
	for (int i = 0; i < m; i++) {
		int k = 0;
		if (s[i] == 'O') continue;
		else {
			while (s[i + 1] == 'O' && s[i + 2] == 'I') {
				k++;
				if (k == n) {
					k--;
					answer++;
				}
				i += 2;
			}
			k = 0;
		}
	}
	cout << answer;
}
*/