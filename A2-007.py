n , m = map(int,input().split())
cord , n , ans = [[0,0]] , n+1 , []
arr , adj = [] , [[] for i in range(n)]
vis , need , it = [[0]*n for i in range(3)]
et = [1]*n
for i in range(1,n):
    cord.append(list(map(int,input().split())))
for targ in map(int,input().split()):
    need[targ] = 1
    et[targ] = 0
for i in range(1,n-1):
    a1 , b1 = cord[i]
    for j in range(i+1,n):
        if i==j: continue
        a2 , b2 = cord[j]
        if a1<a2 and b1>b2:
            it[j] += 1
            adj[i].append(j)
        elif a1>a2 and b1<b2:
            it[i] += 1
            adj[j].append(i)
def dfs(u):
    global arr
    vis[u] , tmp = 1 , []
    arr += [u]
    for v in adj[u]:
        it[v] -= 1
        if it[v]==0: tmp.append(v)
    for v in tmp:
        dfs(v)
        need[u] += need[v]
        et[u] += et[v]
for k in range(1,n):
    if not(it[k] or vis[k]): dfs(k)
    tmp , x , y = [] , 0 , 0
    while len(arr):
        u = arr.pop()
        if need[u]>x:
            x = need[u]
            y = et[u]
            tmp = [u]
        elif need[u]==x:
            if y>et[u]:
                y = et[u]
                tmp = [u]
            elif y==et[u]:
                tmp.append(u)
    ans += tmp
print(len(ans))
print(' '.join(map(str,sorted(ans))))