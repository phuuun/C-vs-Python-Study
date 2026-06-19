n = int(input("Masukkan N : "))
data = list(map(int, input("Masukkan data : ").split()))

data.sort()

minimum = min(data)
maximum = max(data)
rata_rata = sum(data) / n

print("Data terurut :", *data)
print(f"Min: {minimum} | Max: {maximum} | Rata-rata: {rata_rata:.2f}")