extra = False
centsAccepted = [5, 10, 25]

def calculate(payment):
    global owed
    global extra
    global centsAccepted

    if payment in centsAccepted:
        if payment <= owed :
            owed -= payment
        elif payment > 0:
            owed -= payment
            owed = owed * -1
            extra = True

    if owed == 0:
        extra = True

def main():
    while owed != 0:
        if extra:
            break
        print(f"Amount Due: {owed}")
        temp = input("Insert Coin: ")
        if temp.isdigit():
            calculate(int(temp))
        else:
            calculate(0)
    print(f"Change Owed: {owed}")


owed = 50
main()