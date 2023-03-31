const
    nhap = '43tonglt.inp';
    xuat = '43tonglt.out';
var n,i,j,x,y:longint;
    a,f,min:array[0..10000001] of longint;
    sum,max:int64;
begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
    readln(n); j:=1; sum:=0;
    for i:=1 to n do
    begin
        read(x);
        write(x,' ');
        inc(sum,x);
        f[i]:=sum;
    end;
    writeln;
    min[1]:=1;
    for i:=2 to n do if f[i] < min[i - 1] then min[i]:=i else min[i]:=min[i - 1];
    for i:=1 to n do write(f[i],' '); writeln;
    for i:=1 to n do write(min[i],' '); writeln;

    max:=a[n];
    for i:=2 to n do
    begin
        if f[i] - f[min[i - 1]] > max then
        begin
            max:=f[i] - f[min[i - 1]];
            x:=min[i - 1];
            y:=i;
            writeln(x,' ',y-x,' ',max);
        end;
    end;


close(input);close(output);
end.
