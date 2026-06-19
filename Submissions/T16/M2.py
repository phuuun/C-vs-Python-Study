n = int(input("Masukan N: "))

a,b = 0, 1
deret = []

for _ in range(n):
  deret.append(a)
  a, b = b, a +b
print("Deret: ", " ".join(map(str, deret)))
print(f"Fibonnaci ke-{n} {deret[-1]}")