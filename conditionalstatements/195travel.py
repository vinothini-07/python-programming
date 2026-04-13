start = input("Enter start time (HH:MM): ")
end = input("Enter end time (HH:MM): ")

start_h, start_m = map(int, start.split(":"))
end_h, end_m = map(int, end.split(":"))

start_total = start_h * 60 + start_m
end_total = end_h * 60 + end_m

duration = end_total - start_total

hours = duration // 60
minutes = duration % 60

print("Trip duration:", hours, "hours and", minutes, "minutes")