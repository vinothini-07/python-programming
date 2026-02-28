color = input("Enter the traffic light color (Red, Yellow, Green): ").lower()

if color == "red":
    print("Stop")
elif color == "yellow":
    print("Proceed with caution")
elif color == "green":
    print("Go")
else:
    print("Invalid traffic light color!")