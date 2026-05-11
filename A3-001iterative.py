N , pt = int(input()) , [0]
pt += [list(map(int,input().split())) for i in range(N)]
stack , dp = [(1,False)] , dict(())
while stack:
    k , vis = stack.pop()
    a , l , b , r = pt[k]
    if vis:
        wl = l if a else dp[l]
        wr = r if b else dp[r]
        pt[0] += abs(wl-wr)
        dp[k] = 2*max(wl,wr)
    else:
        stack.append((k,True))
        if not a: stack.append((l,False))
        if not b: stack.append((r,False))
print(pt[0])
