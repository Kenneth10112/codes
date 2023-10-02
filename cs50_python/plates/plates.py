def main():
    plate = input("Plate: ")
    if is_valid(plate):
        print("Valid")
    else:
        print("Invalid")


def is_valid(s):
    letters = ""
    numbers = ""
    # Seperating letters to numbers
    if not s.isalnum():
        return False
    for _ in s:
        if _.isalpha():
            letters += _
        else:
            numbers += _

## check if format is followed
    # check rule 1
    if s[:2].isalpha() == False:
        return False
    # check rule 2
    if len(s) > 6:
        return False
    # check rule 3
    if len(letters) != 6:
        if s[len(letters):].isdigit() == False:
            return False
        # check rule 3.1
        if s[len(letters)] == "0":
            return False

# checks all cleared return True
    return True


main()