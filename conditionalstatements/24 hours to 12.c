hour = int(input())
minute = int(input())

if hour < 0 or hour > 23 or minute < 0 or minute > 59:
    print("Invalid time entered!")
else:
    if hour == 0:
        print(f"Time in 12-hour format: 12:{minute:02d} AM")
    elif hour < 12:
        print(f"Time in 12-hour format: {hour:02d}:{minute:02d} AM")
    elif hour == 12:
        print(f"Time in 12-hour format: 12:{minute:02d} PM")
    else:
        print(f"Time in 12-hour format: {hour-12:02d}:{minute:02d} PM")