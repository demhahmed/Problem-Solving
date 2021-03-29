// https://codeforces.com/contest/266/problem/A

#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int num;
    cin >> num;
    
    string stones;
    cin >> stones;
    
    int sum = 0;
    char lchar = stones[0];
    for(int i = 1; i < stones.length(); i ++){
        if(stones[i] == lchar){
            sum += 1;
        }
        else{
            lchar = stones[i];
        }
    }
    
    cout << sum;
}
