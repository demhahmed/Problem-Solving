def BitmapHoles(strArr):

  count = 0
  holes = set()
  visited = set()
  added = True 
  for i in range(len(strArr)):
    for j in range(len(strArr[i])):
      coords = [(i,j)]

      while coords:
        check = coords.pop()
        if check not in visited:
          visited.add(check)

          if int(strArr[check[0]][check[1]]) == 0 and check not in holes:
            holes.add(check)

            #up
            if check[0] - 1 >= 0 and (check[0]-1, check[1]) not in visited:
              coords.append((check[0]-1, check[1]))
            #down
            if check[0] + 1 < len(strArr) and (check[0]+1, check[1]) not in visited:
              coords.append((check[0]+1, check[1]))
            #left
            if check[1] + 1 < len(strArr[check[0]]) and (check[0], check[1] + 1) not in visited:
              coords.append((check[0], check[1] + 1))
            #right
            if check[1] - 1 >= 0 and (check[0], check[1]-1) not in visited:
              coords.append((check[0], check[1]-1))

            #add or not
            if added:
              added = False
              count += 1

          
      added = True

  # code goes here
  return count

# keep this function call here 
print(BitmapHoles(input()))
