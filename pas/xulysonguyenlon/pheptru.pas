const
    nhap = 'pheptru.inp';
    xuat = 'pheptru.out';

function sub(a,b:string):string;
var c:string;
    s, borrow, i:integer;
begin
    borrow:=0;c:='';
    while length(a) < length(b) do a:='0' + a;
    while length(b) < length(a) do b:='0' + b;
    for i:=length(a) downto 1 do
    begin
        s:=ord(a[i])-ord(b[i])-borrow;
        if s<0 then
        begin
            s:=s+10;
            borrow:=1;
        end else borrow:=0;
        c:=chr(s+48)+c;
    writeln(c);
    end;
    while (length(c)>0)and(c[1]='0') do delete(c,1,1);
    sub:=c;
end;

var a,b:int64;
    as,bs:string;

begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
    read(a,b);
    str(a,as);str(b,bs);
    write(sub(as,bs));
close(input);close(output);
end.