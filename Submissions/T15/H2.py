baris, kolom = map(int, input("Baris & Kolom : ").split())

matriks = []

for i in range(baris):
    data = list(map(int, input(f"Baris {i+1} : ").split()))
    matriks.append(data)

print(f"\nMatriks ({baris}x{kolom}) :")

for row in matriks:
    print(*row)

print(f"Transpose ({kolom}x{baris}) :")

for j in range(kolom):
    for i in range(baris):
        print(matriks[i][j], end=" ")
    print()