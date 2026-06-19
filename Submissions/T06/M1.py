nilai = input("Masukkan 5 nilai : ").split()

if len(nilai) != 5:
    print("Harus ada 5 nilai")
else:
    total = 0

    for i in nilai:
        total += int(i)
    rata = total / 5
    print(f"Rata-rata : {rata: .2f}")

    if rata >= 80:
        grade = "A"
    elif rata >= 70:
        grade = "B"
    elif rata >= 60:
        grade = "C"
    elif rata >= 50:
        grade = "D"
    else:
        grade = "E"

    print(f"Grade : {grade}")
    
