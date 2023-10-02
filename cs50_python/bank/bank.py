def check_input(greeting):
    if "HELLO" in greeting.upper().strip():
        print("$0")
    elif "H" == greeting[0].upper():
        print("$20")
    else:
        print("$100")


def main():
    check_input(input(":"))


main()