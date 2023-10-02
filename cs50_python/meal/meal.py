def main():
    currentTime = convert(input(":"))
    if currentTime >= 7.0 and currentTime <= 8.0:
        print("breakfast time")
    elif currentTime >= 12.0 and currentTime <= 13.0:
        print("lunch time")
    elif currentTime >= 18.0 and currentTime <= 19.0:
        print("dinner time")
    else:
        print("")



def convert(time):
    hours, minutes = time.strip().split(":")
    hours,minutes = float(hours), float(float(minutes) / 60)
    currentTime = hours + minutes
    return currentTime


if __name__ == "__main__":
    main()