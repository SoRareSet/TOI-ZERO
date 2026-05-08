tmp = sorted([list(map(int,input().split())) for i in range(int(input()))])
cnt , v = 0 , 0
for _ , p in tmp :
    if p>v : v = p
    else : cnt += 1
print(cnt)
