const
    nhap = 'phepnhanmotsolonvoimotsonho.inp';
    xuat = 'phepnhanmotsolonvoimotsonho.out';

function multiply1(a:string;b:longint):string;
var i:integer;
    carry,s:longint;
    c,tmp:string;
begin
    c:='';
    carry:=0;
    for i:=length(a) downto 1 do
    begin
        s:=(ord(a[i])-48)*b+carry;
        carry:=s div 10;
        c:=chr(s mod 10 + 48)+c;
    end;
    if carry>0 then str(carry,tmp) else tmp:='';
    multiply1:=tmp+c;
end;

var a:int64;
    b:longint;
    as:string;
begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
    read(a,b);
    str(a,as);
    write(multiply1(as,b));
close(input);close(output);
end.