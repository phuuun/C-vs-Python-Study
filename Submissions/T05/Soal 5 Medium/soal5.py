
n = int(input("Masukkan N : "))

a = 0
b = 1

print("Deret :", end=" ")

for i in range(n):
    print(a, end=" ")

    fib = a

    c = a + b
    a = b
    b = c

print(f"\nFibonacci ke-{n} : {fib}")
