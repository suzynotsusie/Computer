const
    nhap = 'trongxe.inp';
    xuat = 'trongxe.out';
var
    n,i,x,count:longint;
    a:array[10102010..10109999] of integer;
begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
    readln(n);
    for i:=1 to n do
    begin
        readln(x);
        inc(a[x]);
    end;
    x:=0;
    for i:=10102010 to 10109999 do if a[i] > 0 then if a[i] <= 5 then x:=x + 100 else x:=x + 100 + a[i] - count;
    write(x);

close(input);close(output);
end.
