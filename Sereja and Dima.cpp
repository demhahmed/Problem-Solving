// https://codeforces.com/contest/381/problem/A

#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> cards;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        cards.push_back(temp);
    }
    
    int sum1 = 0;
    int sum2 = 0;
    int i = 0;
    while(cards.size() != 0){
        int choice1 = cards.front();
        int choice2 = cards.back();
        int thechoice;
        
        if (choice1 > choice2){
            thechoice = choice1;
            cards.erase(cards.begin());
        }
        else{
          thechoice = choice2;  
          cards.erase(cards.end()-1);
        } 
        
        if((i % 2) == 0)
            sum1 += thechoice;
        else sum2 += thechoice;
        
        i += 1;
    }
    
    cout << sum1 << " " << sum2;
}
