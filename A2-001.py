m , n = map(int,input().split())
r = list(map(int,[0]+input().split()))
b = list(map(int,[0]+input().split()))
cnt = 1
def X(op,r1,r2,b1,b2):
    if op: return b1 < r2 and b2 > r1
    if r2 == b2: return True
    return (b1 < r1 and b2 > r2) or (b1 > r1 and b2 < r2)
for i in range(m):
    r1 , r2 = r[i:i+2]
    for j in range(n):
        b1 , b2 = b[j:j+2]
        cnt += X(i%2^j%2,r1,r2,b1,b2)
        if b1 > r2: break
print(cnt)