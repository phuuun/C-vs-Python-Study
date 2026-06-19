nilai = list(map(int, input("Masukkan 5 nilai : ").split()))
rata_rata = sum(nilai) / 5

grade = 'A' if rata_rata >= 80 else ( 'B' if rata_rata >= 70 else ( 'C' if rata_rata >= 60 else ( 'D' if rata_rata >= 50 else 'E' ) ) )
print(f"Rata-rata : {rata_rata:.2f}\nGrade : {grade}")