n = int(input("Masukkan N : "))

a, b = 0, 1
deret = []

for i in range(n):
    deret.append(a)
    a, b = b, a + b

print("Deret :", *deret)
print(f"Fibonacci ke-{n} :", deret[n - 1])