tmp = sorted([list(map(int,input().split())) for i in range(int(input()))])
cnt , p , v = 0 , 0 , 0
for i0 in tmp :
    if i0[1]>v : p , v = i0
    else : cnt += 1
print(cnt)
