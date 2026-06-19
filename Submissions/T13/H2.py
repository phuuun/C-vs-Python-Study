n, m = map(int, input("Baris & Kolom: ").split())
matrix = []

for i in range(n):
  baris = list(map(int, input (f"Baris {i + 1}: ").split()))
  matrix.append(baris)

print(f"Matriks ({n}x{m}): ")
for baris in matrix:
  print(" ".join(map(str, baris)))

print(f"Transpose ({m}x{n}): ")
for j in range(m):
  transpose = [matrix[i][j] for i in range(n)]
  print(" ".join(map(str, transpose)))