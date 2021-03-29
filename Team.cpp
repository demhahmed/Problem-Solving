// https://codeforces.com/contest/231/problem/A

#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int** myarray = new int*[n];
	for (int i = 0; i < n; ++i)
		myarray[i] = new int[3];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> myarray[i][j];
		}
	}
	int sum = 0;
	int totalsum = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; j++) {
			if (myarray[i][j] == 1) {
				sum++;
			}
			if (sum >= 2) {
				totalsum++;
				break;
			}
		}
		sum = 0;
	}
	cout << totalsum << endl;

	for (int i = 0; i < n; ++i) {
		delete[] myarray[i];
	}
	delete[] myarray;

	return 0;
}
