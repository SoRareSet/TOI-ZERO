tmp = input()
odr , stk = [] , dict(())
while tmp != "END":
    odr.append(tmp)
    tmp = input()
for i in odr:
    if len(i.split()) == 3:
        a , b , c = i.split()
        if a == "ADD":
            if stk.get(b,0):
                stk[b] += int(c)
            else:
                stk[b] = int(c)
        else:
            if stk.get(b,0):
                if stk[b] < int(c):
                    print("Not enough stock for",b)
                    stk.pop(b)
                elif stk[b] > int(c):
                    stk[b] -= int(c)
                else:
                    stk.pop(b)
            else:
                print("Not enough stock for",b)
    else:
        if i == "CHECK":
            if min(stk.values()) > 4:
                print("All stocks are sufficient")
            else:
                for c in sorted(stk.keys()):
                    if stk[c] < 5 :
                        print(c)
        else:
            tmp = sorted(stk.items(),key = lambda x:x[0])
            for k,v in tmp:
                print(k+":",v)