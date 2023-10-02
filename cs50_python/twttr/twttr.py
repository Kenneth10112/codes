def removeVowels(sentence):
    temp = ""
    for _ in sentence:
        if _.upper() in "AEIOU":
            continue
        else:
            temp += _

    return temp


def main():
    print(removeVowels(input(":")))


main()