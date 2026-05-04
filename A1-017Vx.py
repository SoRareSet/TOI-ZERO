a = [[int(input()) for j in range(3)] for i in range(2)]
if a[0][0]!=a[1][0]: print(1+(a[0][0]>a[1][0]))
elif a[0][1]!=a[1][1]: print(2-(a[0][1]<a[1][1]))
elif a[0][2]!=a[1][2]: print(1+(a[0][2]>a[1][2]))
else: print(0)
