def find(word_dict, word):
  for i in word_dict:
    if word == i:
      return True

  
  return False

def WordSplit(strArr):
  word = strArr[0];
  word_dict = strArr[1].split(',')
  temp = []

  f = False
  for i in range(len(word), 0, -1):
    if find(word_dict, word[:i]):
      temp.append(word[:i])
    
      rest_of_the_word = word.replace(word[:i], '')
      f = True
      break

  if f == True:
    for i in range(len(rest_of_the_word), 0, -1):
      if find(word_dict, rest_of_the_word[:i]):
        temp.append(rest_of_the_word[:i])
        break

  output = ""
  for i in temp:
    output += i 
    output += ','
  
  if output == "":
    strArr = "not possible"

  else:
    output = output[:-1]
      # code goes here
  return output

# keep this function call here 
print(WordSplit(input()))
