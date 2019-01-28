n=int(input())
grid=[]
for i in range(n):
    i=input()
    grid.append(i)
for i in range(n):
    for j in range(n):
        if grid[i][j]=='m':
            rowM=i
            colM=j
        if grid[i][j]=='p':
            rowPrince=i
            colPrince=j
rowSteps=(rowPrince-rowM)
colSteps=(colPrince-colM)
if(rowSteps>=0):
    print('DOWN'*abs(rowSteps))
else:
    print('UP'*abs(rowSteps))
if(colSteps>=0):
    print('RIGHT'*abs(colSteps))
else:
    print('LEFT'*abs(colSteps))
