A , B = map(int,input().split())
num , C = [0]*15002 , 0
for i in range(3,123,2):
    if num[i]: continue
    for j in range(i*i,15001,2*i): num[j] = 1
for i in range(3*A+(A&1==0),3*B,2):
    if num[i]: continue
    for j in range(A,B+1):
        p = (i-j)//2
        C += max(0,1+min(p-j,B-(i-j)%2-p))
print(C)
