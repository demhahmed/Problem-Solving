// https://codeforces.com/contest/734/problem/A

#include <iostream>

using namespace std;

int main() {

  int n;
  cin >> n;

  int sum_A = 0;
  int sum_D = 0;
  char in;

  for (int i = 0; i < n; i++) {
    cin >> in;
    if (in == 'A') {
      sum_A++;
    }
    if (in == 'D') {
      sum_D++;
    }
  }

  if (sum_A > sum_D) {
    cout << "Anton" << endl;
  }
  else if (sum_A < sum_D) {
    cout << "Danik" << endl;
  }
  else {
    cout << "Friendship" << endl;
  }

  return 0;
}
