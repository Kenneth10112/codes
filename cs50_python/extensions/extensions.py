def analyseFile(filename):
    name = list(filename.strip().split("."))
    fileExtensionType = name[len(name) - 1]

    if fileExtensionType == "gif":
        print(f"image/{fileExtensionType}")
    elif fileExtensionType == "jpg":
        print(f"image/jpeg")
    elif fileExtensionType == "jpeg":
        print(f"image/{fileExtensionType}")
    elif fileExtensionType == "png":
        print(f"image/{fileExtensionType}")
    elif fileExtensionType == "txt":
        print("text/plain")
    elif fileExtensionType.upper() == "PDF":
        print(f"application/{fileExtensionType.lower()}")
    elif fileExtensionType == "zip":
        print(f"application/{fileExtensionType}")
    else:
        print("application/octet-stream")


def main():
    analyseFile(str(input("Filename: ")))


main()