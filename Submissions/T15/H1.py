n = int(input("Masukkan N : "))

data = list(map(int, input("Masukkan data : ").split()))

data.sort()

rata = sum(data) / n

print("Data terurut :", end=" ")
for x in data:
    print(x, end=" ")

print()
print(f"Min: {min(data)} | Max: {max(data)} | Rata-rata: {rata:.2f}")