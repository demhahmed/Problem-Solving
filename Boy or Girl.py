# https://codeforces.com/contest/236/problem/A

distinct = {}

username = input()

for i in username:
    distinct[i] = 0
    
if len(distinct) % 2 != 0:
    print("IGNORE HIM!")
else: 
    print("CHAT WITH HER!")
