// https://codeforces.com/contest/405/problem/A


#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  int *myarr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> myarr[i];
  }
  sort(myarr, myarr + n);
  for (int i = 0; i < n; i++) {
    cout << myarr[i] << " ";
  }
  cout << endl;
  return 0;
}
