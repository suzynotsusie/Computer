#em tạo hàm kiểm tra xem chuỗi đó có phải chuỗi đối xứng hay không rồi dùng hàm đó kiểm tra các chuỗi con có độ dài từ lớn đến bé

def checkReverse(s): #hàm để kiểm tra xem chuỗi có phải là một chuỗi đối xứng không
    if s == s[::-1]:#s[::-1] là chuỗi đảo ngược của s
        return len(s)#nếu đúng thì trả về độ dài chuỗi s
    else:
        return 1#sai thì trả về 1
def solve(s):
    for i in range(len(s), 1, -1):
#lặp lần lượt qua các số kí tự có thể là chuỗi con của chuỗi s
#(chạy từ lớn đến bé để tiện cho việc tìm chuỗi con đối xứng có độ dài lớn nhất)
#range(x,y,-1) có nghĩa là chạy từ y-1 tới x với số bước là -1(downto)
        for j in range(len(s) - i + 1):
#lặp qua các giá trị vị trí đầu tiên của chuỗi con có i kí tự của s
            if checkReverse(s[j:j+i]) > 1:#nếu chuỗi con là chuỗi đối xứng
                return checkReverse(s[j:j+i]) #trả về độ dài của chuỗi con đó
    return 1 #trả về 1 vì theo như đề bài thì 'x' cũng là một chuối đối xứng

with open('CHUOI.INP', 'r') as inp:
    s = inp.readline().rstrip('\n')
with open('CHUOI.OUT', 'w') as out:
    out.write('{}'.format(solve(s)))
    
