print("Enter prices and discounts for 3 brands:")

best_price = float('inf')
best_brand = ""

for i in range(1, 4):
    price = float(input(f"Brand {i} price: "))
    discount = float(input(f"Brand {i} discount (%): "))
    
    final_price = price - (price * discount / 100)
    
    if final_price < best_price:
        best_price = final_price
        best_brand = f"Brand {i}"

print("Best deal is", best_brand, "with price:", best_price)