const
    nhap = 'ps.inp';
    xuat = 'ps.out';
var a:array[0..1000001] of int64;
    j,i,n,k,h,max:longint;
begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
j:=0;
    readln(n);
    for i:=1 to n do
    begin
        read(k);
        write(k,' ');
        inc(j, k);
        a[i]:=j;
    end;
    writeln;
    for i:=1 to n do write(a[i],' ');
    writeln;

max:=0;
    for i:=0 to n do
    for j:=i + 1 to n do if a[j] - a[i] > 0 then if j - i > max then
    begin
        max:=j - i;
        k:=i + 1;
        h:=j;
        writeln('---  ',i,' ',j);
    end;
    write(k,' ',h);
close(input);close(output);
end.
