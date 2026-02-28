age = int(input("Enter your age: "))

if age < 0 :
    print("Invalid age! ")
elif age <= 12:
    print("Ticket Type: Child Ticket")
else:
    print("Ticket Type: Regular Ticket")