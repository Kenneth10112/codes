def main():
    try:
        x, y = input("fraction: ").strip().split("/")
        x, y = int(x), int(y)
        percentage = round((x/y) * 100)
        # percentage = math.ceil(percentage)

        if percentage > 100:
            main()
        elif percentage >= 99:
            print("F")
        elif percentage <= 1:
            print("E")
        else:
            print(f"{percentage}%")

    except (ValueError, ZeroDivisionError):
        main()


main()