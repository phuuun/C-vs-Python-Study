baris, kolom = map(int, input("Baris & Kolom : ").split())

matrix = []

for i in range(baris):
    nomor = list(map(int, input(f"Baris {i+1} : ").split()))
    matrix.append(nomor)

print(f"Matriks ({baris}x{kolom}) :")

for i in matrix:
    for j in i:
        print(j, end=" ")
    print()

print(f"Transpose ({kolom}x{baris}) : ")

for i in range(kolom):
    for j in range(baris):
        print(matrix[j][i], end=" ")
    print()
