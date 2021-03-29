# https://codeforces.com/contest/112/problem/A

alphapetic = {
    "a":1,"b":2,"c":3,"d":4,"e":5,"f":6,"g":7,"h":8,"i":9,"j":10,"k":11,"l":12,"m":13,
    "n":14,"o":15,"p":16,"q":17,"r":18,"s":19,"t":20,"u":21,"v":22,"w":23,"x":24,"y":25,
    "z":26
}
 
def ans(word1, word2):
    
    for i in range(len(word1)):
        ltr1 = word1[i].lower()
        ltr2 = word2[i].lower()
        
        if alphapetic[ltr1] > alphapetic[ltr2]:
            return 1
        if alphapetic[ltr1] < alphapetic[ltr2]:
            return -1
            
    return 0
 
word1 = input()
word2 = input()
 
print(ans(word1, word2))
