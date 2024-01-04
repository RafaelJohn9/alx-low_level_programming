#!/usr/bin/python3

def pascalTriangle(num=0):
    if num == 0:
        emptyList = []
        return(emptyList)
    i  = 0

    previousList = []
    while i < num:
        currentList = []
        currentList.append(1)
        if i == 0:
            print(currentList)
            previousList == currentList
            i += 1
            continue
        elif i == 1:
            currentList.append(1)
            print(currentList)
            previousList = currentList
            i += 1
            continue
        else:
            index = 0
            while index + 1 < len(previousList):
                currentList.append((previousList[index] + previousList[index + 1]))
                index += 1
            currentList.append(1)
            print(currentList)
            previousList  = currentList
            index += 1
        i += 1


while True:
    userInput = int(input("enter num\n> "))
    pascalTriangle(userInput)
