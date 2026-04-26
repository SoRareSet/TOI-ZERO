def xgcd(i,j):
  x0 , x , y0 , y = [1,0,0,1]
  while j:
      x0 , x = x , x0-i//j*x
      y0 , y = y , y0-i//j*y
      i , j = j , i%j
  return i , x0 , y0
N , K , T = map(int,input().split())
g , c , d = xgcd(N,K)
r , T = N//g , T-1
if T%g or T==0: print(r)
else: print(min(r,c%N*T%N+1))
