r, c = map(int, input("Baris & Kolom : ").split())
m = [list(map(int, input(f"Baris {i+1} : ").split())) for i in range(r)]
print(f"Matriks ({r}x{c}) :")
for row in m: print(*row)
print(f"Transpose ({c}x{r}) :")
for row in zip(*m): print(*row)
