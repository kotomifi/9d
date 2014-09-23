#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv) {
	string a, b;
	while (cin >> a >> b) {
		long num1 = 0;
		long num2 = 0;
		for (int i = 0; i < a.length(); ++i) {
			if (a[i] >= '0' && a[i] <= '9') {
				num1 = num1 * 10 + a[i] - '0';
			}
		}
		for (int j = 0; j < b.length(); ++j) {
			if (b[j] >= '0' && b[j] <= '9') {
				num2 = num2 * 10 + b[j] - '0';
			}
		}
		if ('-' == a[0] && '-' == b[0]) {
			cout << -(num1 + num2) << endl;
		}
		else if ('-' == a[0] && '-' != b[0]) {
			cout << num2 - num1 << endl;
		}
		else if ('-' != a[0] && '-' == b[0]) {
			cout << num1 - num2 << endl;
		}
		else {
			cout << num1 + num2 << endl;
		}
	}
	return 0;
}