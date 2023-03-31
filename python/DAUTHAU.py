#bài này là tìm max xong xuất ra name đi kèm với giá trị :DDD
result = ''
max = 0
with open('DAUTHAU.INP', 'r') as inp:
    n = int(inp.readline().rstrip('\n'))
    for i in range(n):
        name = inp.readline().rstrip('\n')
        cost = int(inp.readline().rstrip('\n'))
        if cost > max:
            max = cost
            result = name
with open('DAUTHAU.OUT', 'w') as out:
    out.write('{}'.format(result))
