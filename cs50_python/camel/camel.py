def convertToSnakeCase(sentence):
    for char in sentence:
        if char == sentence[0]:
            print(f"{char.lower()}", end="")
        elif char.isupper():
            print(f"_{char.lower()}", end="")
        else:
            print(f"{char}", end="")


def main():
    convertToSnakeCase(input("camelCase: "))


main()