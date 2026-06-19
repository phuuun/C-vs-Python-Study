n = int (input ("Masukkan N: "))
data = list(map(int, input("Masukkan Data ").split()))


data.sort()

min_val = data[0]
max_val = data[-1]
rata_rata = sum(data) / n

print("Data terurut: ", " ".join(map(str, data)))
print(f"Min: {min_val} Max: {max_val} | Rata-rata: {rata_rata:.2f}")