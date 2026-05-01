A , B = map(int,input().split())
num , C = set([2]+list(range(3,15001,2))) , 0
for i in range(3,123,2):
    if i not in num: continue
    for j in range(i*i,15001,2*i): num.discard(j)
for i in num:
    for j in range(A,B+1):
        p = (i-j)//2
        C += max(0,1+min(p-j,B-(i-j)%2-p))
print(C)