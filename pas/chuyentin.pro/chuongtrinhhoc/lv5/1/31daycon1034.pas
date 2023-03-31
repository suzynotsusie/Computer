const
    nhap = '31daycon1034.inp';
    xuat = '31daycon1034.out';
var n,k,i,j:longint;
    a:array[1..1000000] of int64;
    max,sum:int64;
begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
    readln(n,k);
    for i:=1 to n do read(a[i]);
    if n =  k then
    begin
        for i:=1 to n do inc(sum,a[i]);
        write(sum);
        exit;
    end;
    for i:=1 to k do inc(sum,a[i]);
    max:=sum;
     for i:=2 to n - k + 1 do
     begin
        dec(sum,a[i-1]);
        inc(sum,a[i+k-1]);
        if sum > max then max:=sum;
    end;
    write(max);
close(input);close(output);
end.