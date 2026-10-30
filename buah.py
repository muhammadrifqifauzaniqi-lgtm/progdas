buah = ["mangga", "jeruk"] 

print(buah[1])#Mengakses elemen berdasarkan indeks

buah.insert(0, "apel")#Tambahkan di awal
buah.insert(2, "semangka")#tambahkan di tengah
buah.append("pisang")
print("setelah ditambah:", buah)

buah.pop(0)#hapus elemen di awal
buah.pop(1)#hapus elemen di tengah
buah.pop()#hapus elemen di akhir
print("setelah di hapus:", buah)