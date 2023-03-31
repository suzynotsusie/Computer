const
    nhap = 'xephang.inp';
    xuat = 'xephang.out';
var
    x, y, ans:int64;
    i:longint ;
begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
    readln(i); readln(x); read(y);
ans:=0;
    for i:=x to y do if i mod 2 = 0 then ans:=ans + i - 1 else ans:=ans + i + 1;
    write(ans);
close(input);close(output);
end.
