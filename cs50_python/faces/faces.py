def convert(sentence):
    temp = sentence.replace(":)", "🙂").replace(":(", "🙁")
    print(temp)


def main():
    convert(input("Sentence: "))


main()