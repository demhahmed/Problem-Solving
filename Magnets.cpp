// https://codeforces.com/contest/344/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int num;
    cin >> num;

    string str = "";

    for(int i = 0; i < num; i ++){
        string tmp;
        cin >> tmp;
        str += tmp;
    }

    int sum = 1;
    char lchar = str[0];
    for(int i = 1; i < str.length(); i ++){
        if(str[i] == lchar){
            sum += 1;
        }
        lchar = str[i];
    }

    cout << sum;
}
