nomor = int(input("Masukkan nomor antrian : "))

if nomor % 2 == 0:
    print(f"Nomor {nomor} adalah : GENAP → Loket B")
else:
    print(f"Nomor {nomor} adalah : GANJIL → Loket A")