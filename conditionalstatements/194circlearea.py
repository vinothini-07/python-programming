import math

def circle_area():
    radius = float(input("Enter radius of the circle: "))
    area = math.pi * radius ** 2
    print("Area of the circle is:", area)

def menu():
    while True:
        print("\n--- Menu ---")
        print("1. Calculate Circle Area")
        print("2. Exit")
        choice = input("Choose an option: ")

        if choice == '1':
            circle_area()
        elif choice == '2':
            print("Exiting program.")
            break
        else:
            print("Invalid choice. Try again.")

menu()