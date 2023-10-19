filename = input("nama file: ")
try:
    handle = open(filename)
    total = 0
    for line in handle:
        total += len(line)
        kb = total / 1000
        print("Ukuran: " + str(mb) + " KB")
except:
    print("File tidak ditemukan!")