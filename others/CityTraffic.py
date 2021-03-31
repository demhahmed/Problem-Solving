def get_road_value(arr):
  value = 0
  for i in arr:
    value += i

  return value


def search(arr, Id, my_value):
  nop = []
  for i in arr:
    if Id == i[0]:
      for j in range(1, len(i)):
        if i[j] != my_value:
          nop.append(i[j])

  
  return nop


def get_max_road(arr):
  max_road = arr[0]

  for i in range(0, len(arr)):
    if arr[i] > max_road:
      max_road = arr[i]

  return max_road

def CityTraffic(strArr):

  arr = []


  for i in strArr:
    temp = []
    splited = i.split(':')
    temp.append(int(splited[0]))
    new = splited[1].split(',')
    for j in new:
      j = j.replace('[','')
      j = j.replace(']','')

      temp.append(int(j))

    arr.append(temp)

  arr = sorted(arr)
  output = ''
  for i in arr:
    roads = []

    my_value = i[0]

    for j in range(1, len(i)):
        nodes_Set = set()
        checked = set()
        visit = [i[j]]

        nodes_Set.add(i[j])
        checked.add(i[j])

        while len(visit) != 0:
          Id = visit.pop()
          sub = search(arr, Id, my_value)
          for m in sub:
            if m not in checked:
              checked.add(m)
              visit.append(m)
              nodes_Set.add(m)

        roads.append(get_road_value(nodes_Set))

    
    max_road = get_max_road(roads)

    output += str(my_value)
    output += ':'
    output += str(max_road)
    output += ','


  output = output[:-1]

  # code goes here
  return output

# keep this function call here 
print(CityTraffic(input()))
