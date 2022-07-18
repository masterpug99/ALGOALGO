#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	long long f, s,c;
	f = 0;
	s = 1;
	long long n;
	cin >> n;
	if (n == 1) {
		cout << 1;
	}
	else {
		for (long long i = 2; i <= n; i++) {
			c = s;
			s = (f % 1000000007 + s % 1000000007) % 1000000007;
			f = c;
		}
		cout << s;
	}
}