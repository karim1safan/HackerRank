n = int(input())

if n % 2 != 0:
    print("Weird")
elif n % 2 == 0:
    if n in [2,3,4,5]:
        print("Not Weird")
    elif n in [6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]:
        print("Weird")
    elif n > 20:
        print("Not Weird")
