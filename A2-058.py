A , B , d , r = map(int,input().split())
if A%d > r: A = (A//d)*d+d+r
elif A%d < r: A = (A//d)*d+r
if B%d > r: B = (B//d)*d+r
elif B%d < r: B = (B//d)*d-d+r
print(1-(A-B)//d)
