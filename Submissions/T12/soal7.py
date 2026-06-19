n = int(input("Masukkan banyak data : "))

nomor = list(map(int, input("Masukkan data : ").split()))

if len(nomor) != n:
    print("Harus Sesuai berapa N!")
else:
    nomor.sort()
    rata = sum(nomor) / n
    print("Data terurut :", end=" ")

    for i in nomor:
        print(i, end=" ")
    print(f"\nMin: {nomor[0]} | Max: {nomor[n-1]}| Rata-rata: {rata:.2f}")
