const
    nhap = 'phepcong.inp';
    xuat = 'phepcong.out';


function add(a, b:string):string;
var sum, carry, i, x, y:integer;
    c:string;
begin
    carry:=0;c:='';
    while length(a) < length(b) do a:='0' + a;
    while length(b) < length(a) do b:='0' + b;
    writeln(a,'+',b);
    for i:=length(a) downto 1 do
    begin
        x:=ord(a[i]) - 48;
        y:=ord(b[i]) - 48;
        sum:= x + y + carry;
        carry:=sum div 10;
        c:=chr(sum mod 10 + 48) + c;
    end;
    if carry > 0 then c:='1' + c;
    add:=c;
end;
var a,b:int64;
    ass, bss:string;
begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
    read(a,b);
    str(a, ass); str(b, bss);
    write(add(ass,bss));

close(input);close(output);
end.
