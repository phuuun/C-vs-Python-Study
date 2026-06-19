n = int(input("Masukkan N : "))

a = 0
b = 1

print("Deret :", end=" ")

for i in range(1, n + 1):
    print(a, end=" ")

    if i == n:
        hasil = a

    temp = a + b
    a = b
    b = temp

print()
print(f"Fibonacci ke-{n} : {hasil}")