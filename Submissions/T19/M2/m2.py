n = int(input("Masukkan N : "))
a, b = 0, 1
seq = []
for _ in range(n):
    seq.append(a)
    a, b = b, a + b
print("Deret :", *seq)
print(f"Fibonacci ke-{n} : {seq[-1]}")
