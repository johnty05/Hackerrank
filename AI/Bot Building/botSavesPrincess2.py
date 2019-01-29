def nextMove(n,r,c,grid):
    
    for i in range(n):
        for j in range(n):
            if grid[i][j] == "p":
                princeR = i
                princeC = j
                break
    
    if princeR-r<0:
        go="UP"
    if princeC-c<0:
        go="LEFT"
    if princeR-r>0:
        go="DOWN"
    if princeC-c>0:
        go="RIGHT"
    return go

n = int(input())
r,c = [int(i) for i in input().strip().split()]
grid = []
for i in range(0, n):
    grid.append(input())

print(nextMove(n,r,c,grid))
