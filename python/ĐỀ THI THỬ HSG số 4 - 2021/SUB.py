def solve(lst):
    for i in range(len(lst[2])):
        if lst[2][i] != lst[3][i]:
            return lst[2][i]
with open('SUB.INP', 'r') as inp:
    numList = list(inp.readline().rstrip('\n').split(' '))
    numList.append(str(int(numList[0]) - int(numList[1])))
with open('SUB.OUT', 'w') as out:
    out.write('{}'.format(solve(numList)))
