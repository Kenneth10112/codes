def calculate(num1, operant, num2):
    if operant == "+":
        result = float(num1) + float(num2)
        print(f"{result:.1f}")
    elif operant == "-":
        result = float(num1) - float(num2)
        print(f"{result:.1f}")
    elif operant == "/":
        result = float(num1) / float(num2)
        print(f"{result:.1f}")
    elif operant == "*":
        result = float(num1) * float(num2)
        print(f"{result:.1f}")


num1, operant, num2 = input(":").split(" ")
calculate(num1, operant, num2)
