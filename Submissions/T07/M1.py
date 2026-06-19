nilai = list(map(int, input("Masukkan 5 nilai : ").split()))

rata_rata = sum(nilai) / 5

if rata_rata >= 80:
    grade = "A"
elif rata_rata >= 70:
    grade = "B"
elif rata_rata >= 60:
    grade = "C"
elif rata_rata >= 50:
    grade = "D"
else:
    grade = "E"

print(f"Rata-rata : {rata_rata:.2f}")
print("Grade :", grade)