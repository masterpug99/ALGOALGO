#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
/*
int main() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		long long number = (str[i] - 'a') + 1;
		long long num = 1;
		int T = i;
		while (T--) {
			num = (num * 31) % 1234567891;
		}
		sum = (sum + ((number * num) % 1234567891))%1234567891;
	}
	cout << sum;
}
*/