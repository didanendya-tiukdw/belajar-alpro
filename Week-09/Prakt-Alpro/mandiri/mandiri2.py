filename = input("nama file1: ")
handle = open(filename)
for line in handle:
  if line.strip():
    pecah = line.split("||")
    print(pecah[0].strip())
    jwb = input("Jawab: ")
    if jwb.strip().lower() == pecah[1].strip().lower():
      print("Jawaban benar!")
    else:
      print("Jawaban salah!")
print("Selesai.")