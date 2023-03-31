const
    nhap = 'makhoa.inp';
    xuat = 'makhoa.out';
var a:array['0'..'9'] of byte;
    x,y:string;
    i:byte;
    c:char;
begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
    readln(x);read(y);
    for i:=1 to length(x) do a[x[i]]:=1;
    for i:=1 to length(y) do if a[y[i]] = 1 then a[y[i]]:=2;
    for c:='9' downto '0' do if a[c] = 2 then write(c);
close(input);close(output);
end.
