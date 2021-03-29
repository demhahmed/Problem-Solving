// https://codeforces.com/contest/263/problem/A

#include <iostream>

using namespace std;

int main() {
	int mat [5][5];
	int c, r;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> mat[i][j];
			if (mat[i][j] == 1) {
				c = i + 1;
				r = j + 1;
			}
		}
	}
	int ans = abs(c - 3) + abs(r - 3);
	cout << ans << endl;
	return 0;
}
