def main():
    keywords_accepted = ["42","FORTY TWO","FORTY-TWO"]
    compare = input(":")
    if compare.strip().upper() in keywords_accepted:
        print("Yes")
    else:
        print("No")


main()