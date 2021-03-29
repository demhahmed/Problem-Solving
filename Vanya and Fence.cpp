// http://codeforces.com/contest/677/problem/A

#include <iostream>

using namespace std;

int main() {
  double n, h;
  cin >> n >> h;

  int width = 0;
  int height;

  for (int i = 0; i < n; i++) {
    cin >> height;
    if (height > h) {
      width = width + 2;
    }
    else {
      width++;
    }
  }

  cout << width << endl;

  return 0;
}
