while True:
    i = int(input(''))
    if i==0:
        break
    print(f'{i} is{"" if i%11==0 else " not"} a multiple of 11.')

