#em tính tổng số bánh bông lan kem rồi chia lấy dư với 28 học sinh để tìm ra số bánh còn dư sau khi phát cho 28 học sinh
with open('BANH.inp', 'r') as inp:
    l = int(inp.readline().rstrip('\n'))#nhập l, rstrip('\n') dùng để xóa chuỗi xuống dòng sau khi nhập
    n = int(inp.readline().rstrip('\n'))
with open('BANH.out', 'w') as out:
    out.write('{}'.format((l * 8 + n * 3) % 28))
