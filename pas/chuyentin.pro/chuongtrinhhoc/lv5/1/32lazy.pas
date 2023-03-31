const
    nhap = '32lazy.inp';
    xuat = '32lazy.out';
var a:array[0..10000000] of longint;
    x,y,n,k,i,max,min:longint;

begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
    readln(n,k);  k:=k * 2 + 1;
    max:=0; min:=10000000;
    for i:=1 to n do
    begin
        readln(x,y);
        a[y]:=x;
        if y > max then max:=y;
        if y < min then min:=y;
    end;
    y:=0;
    for i:=min to min + k -1 do if a[i] > 0 then inc(y,a[i]);
    n:=y;
    for i:=min + 1 to max - k + 1 do
    begin
        dec(y,a[i-1]);
        inc(y,a[i+k-1]);
        if y > n then n:=y;
    end;
    write(n);
close(input);close(output);
end.
