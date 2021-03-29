// https://codeforces.com/contest/427/problem/A

#include <bits/stdc++.h>
 
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int crime = 0;
    int police = 0;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        
        if(tmp < 0){
            if(police == 0)
                crime += 1;
            else
                police -= 1;
        }
        else
            police += tmp;
    }
    
    cout << crime;
}
