baris, kolom = map(int, input("Baris & Kolom : ").split())

matriks = []

for i in range(baris):
    row = list(map(int, input(f"Baris {i + 1} : ").split()))
    matriks.append(row)

print(f"Matriks ({baris}x{kolom}) :")
for i in range(baris):
    for j in range(kolom):
        print(matriks[i][j], end=" ")
    print()

print(f"Transpose ({kolom}x{baris}) :")
for i in range(kolom):
    for j in range(baris):
        print(matriks[j][i], end=" ")
    print()