#bài này em xử lí file input và tạo list 2 chiều có các list là tổng giá trị các hàng và các cột
#sau đó em tính tổng của hàng đầu tiên và so sánh số đó với các tổng của các hàng và các cột còn lại

def solve(squarelst):#hàm kiểm tra xem list 2 chiều squarelst có phải hình vuông ma thuật hay không
    total = sum(squarelst[1])#tổng cố định của hàng đầu tiên
    for i in range(1, 8):
        if sum(squarelst[i]) != total:#kiểm tra xem có khác với các hàng còn lại không
            return 'not magic'#nếu khác thì trả về 'not magic'
    return 'magic'#chạy xong vòng lặp mà chưa trả về giá trị nào thì trả về 'magic'

square = [] #list 2 chiều gồm các list con là các giá trị của các hàng và các cột
lst = [] #list để xử lí
with open('MATHUAT.INP', 'r') as inp:
    for i in range(4):
        lst = list(inp.readline().rstrip('\n').split(' '))
# chuyển từ line trong inpu thành một list, split(' ') để cắt chuỗi thành một phần tử và thêm vào lst
        lst = [int(j) for j in lst]# vì lúc này list chứa các phần tử số ở dạng xâu kí tự nên phải dùng int()
                                               #để chuyển các phần tử lại thành số
        square.append(lst)#thêm lst vừa xử lí vào list square tạo thành list 2 chiều

    for i in range(4):
        lst = [square[j][i] for j in range(4)]
        square.append(lst)
#thêm các list chứa các phần từ ở cột từ 1 tới 4 vào square
with open('MATHUAT.OUT', 'w') as out:
    out.write('{}'.format(solve(square)))

