nilai = list(map(int, input("Masukkan 5 nilai : ").split()))

rata = sum(nilai) / 5

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

print(f"Rata-rata : {rata:.2f}")
print(f"Grade : {grade}")