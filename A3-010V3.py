N , K , T = map(int,input().split())
def xgcd(a,b):
    if a==0 : return b , 0 , 1
    g , x, y = xgcd(b%a,a)
    return g , y-x*(b//a) , x
g , c , d = xgcd(K,N)
r , T = N//g , T-1
if T%g or T==0: print(r)
else: print(min(r,c%N*T%N+1))
