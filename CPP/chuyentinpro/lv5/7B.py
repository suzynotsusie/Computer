#chr(char)
#ord(int)
strA = str(input()).upper()
strB = str(input()).upper()
checkChar = []

for i in range(0, 26):
    checkChar.append(0)
for i in strA:
    checkChar[ord(i) - 65] = 1
for i in strB:
    if checkChar[ord(i) - 65] == 1:
        checkChar[ord(i) - 65] = 2
    elif checkChar[ord(i) - 65] == 0:
        checkChar[ord(i) - 65] = 3
chars = ""
for i in range(0, 26):
    if checkChar[i] == 1 or checkChar[i] == 3:
        print("NO")
        exit()
    elif checkChar[i] == 2:
        chars += chr(i + 65)
print("YES")
print(chars)
    
