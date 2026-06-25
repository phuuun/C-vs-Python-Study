def faktorial(n): return 1 if n <= 1 else n * faktorial(n - 1)
def pangkat(a, b): return 1 if b == 0 else a * pangkat(a, b - 1)

n = int(input("Masukkan n (faktorial) : "))
a, b = map(int, input("Masukkan a dan b : ").split())
print(f"{n}! = {faktorial(n)}")
print(f"{a}^{b} = {pangkat(a, b)}")
