str = input("Masukkan kata: ")
print("Kata Awal: " + str)
print("Kata Akhir: " + str[::-1])
print("Palindrome" if str.lower() == str[::-1].lower() else "Not Palindrome")