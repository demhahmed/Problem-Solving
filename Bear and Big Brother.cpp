// https://codeforces.com/contest/791/problem/A

#include <iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int i = 0;
	while (a <= b) {
		a = a * 3;
		b = b * 2;
		i++;
	}
	cout << i << endl;
	return 0;
}
