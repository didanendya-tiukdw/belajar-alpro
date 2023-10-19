filename1 = input("nama file1: ")
filename2 = input("nama file2: ")
handle1 = open(filename1)
handle2 = open(filename2)
brs = 0
for line in handle1:
  brs += 1
  print("=====================")
  line2 = handle2.readlines()
  if line == line2:
    print(str(brs) + ": sama")
  else:
    print(str(brs) + ": beda")
    print(line)
    print(line2)