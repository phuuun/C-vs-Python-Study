
n = int(input("Masukkan n (faktorial) : "))

a, b = map(int, input("Masukkan a dan b : " ).split())

fakto = 1;
power = 1;

for i in range(n):
    fakto *= i

for i in range(b):
    power *= a

print(f"{n}! = {fakto}")
print(f"{a}^{b} = {power}")
