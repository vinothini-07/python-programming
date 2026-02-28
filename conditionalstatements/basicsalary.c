basic = float(input("Enter Basic Salary: "))

if basic <= 70000:
    hra = 0.30 * basic
    da = 0.80 * basic
    gross_salary = basic + hra + da
    
    print("HRA:", hra)
    print("DA:", da)
    print("Gross Salary:", gross_salary)
else:
    print("Condition not satisfied")