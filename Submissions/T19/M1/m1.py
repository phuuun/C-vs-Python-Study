nilai = list(map(int, input("Masukkan 5 nilai : ").split()))
rata = sum(nilai) / 5
grade = 'A' if rata >= 80 else 'B' if rata >= 70 else 'C' if rata >= 60 else 'D' if rata >= 50 else 'E'
print(f"Rata-rata : {rata:.2f}")
print(f"Grade : {grade}")
