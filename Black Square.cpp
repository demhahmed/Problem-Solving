// https://codeforces.com/contest/431/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int cal [4];
    for(int i = 0; i < 4; i++){
        int tmp;
        cin >> tmp;
        cal[i] = tmp;
    }
    
    string s;
    cin >> s;
    
    int sum = 0;
    for(int i = 0; i < s.length(); i++){
        int x;
        string idx{s[i]};
        sum += cal[stoi(idx) - 1];
    }
    
    cout << sum;
}
