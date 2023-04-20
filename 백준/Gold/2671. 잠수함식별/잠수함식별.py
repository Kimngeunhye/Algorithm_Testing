import re
signal = input()
r = re.compile('(100+1+|01)+')
vaild = r.fullmatch(signal)

if vaild:
    print("SUBMARINE")
else:
    print("NOISE")