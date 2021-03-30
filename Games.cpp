// https://codeforces.com/contest/268/problem/A

#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int n;
    
    cin >> n;
    
    int *H = new int [n];
    int *A = new int [n];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            int tmp;
            cin >> tmp;
            if(j == 0){
                H[i] = tmp;
            }
            else{
                A[i] = tmp;
            }
        }
    }
    
    int sum = 0;
    for(int i = 0; i < n; i++){
        int occur = 0;
        for(int j = 0; j < n; j++){
            if(A[j] == H[i]){
                occur ++;
            }    
        }
        sum += occur;
    }
    
    cout << sum;
}
