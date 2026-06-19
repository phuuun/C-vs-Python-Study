
def faktorial(n):
    if n == 0 or n == 1:
        return 1
    return n * faktorial(n - 1)


def pangkat(a, b):
    if b == 0:
        return 1
    return a * pangkat(a, b - 1)


n = int(input("Masukkan n (faktorial) : "))
a, b = map(int, input("Masukkan a dan b : ").split())

print(f"{n}! = {faktorial(n)}")
print(f"{a}^{b} = {pangkat(a, b)}")