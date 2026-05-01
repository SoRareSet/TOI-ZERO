T , x = int(input()) , ""
while T>1 and (c:=input()):
    A , N = map(int,c.split())
    T -= (A>14)*N
    if A<15: x += "-1\n"
    elif T<0: x += "-2"
    else:
        if A<23: x += f"{120*N} {T}\n"
        elif A>59: x += f"{75*N} {T}\n"
        else: x += f"{150*N} {T}\n"
print(x)