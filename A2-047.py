import re
N = int(input())
for i in [input().strip().lower() for i in range(N)]:
    j = i.replace("ello","i").replace("good","").split()
    if "hi" in j: print("Hello! How can I help you?")
    elif "bye" in j: print("Goodbye! Have a nice day!") 
    elif i[-1] == "?": print("That's an interesting question!")
    elif re.findall("[0-9]",i): print("I see some numbers there!")
    elif len(i)-i.count(" ") > 19: print("That's quite a long message!")
    else: print("I understand.")
