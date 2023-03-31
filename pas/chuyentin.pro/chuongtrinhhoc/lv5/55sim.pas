const
    nhap = '55sim.inp';
    xuat = '55sim.out';
var
    a, b:ansistring;
    ans, i, j:longint;
begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
ans:=0;
    readln(a);read(b);
    write(a,' ',b);  writeln;
    for i:=1 to length(b) - length(a) + 1 do
    for j:=1 to length(a) do if a[j] = b[i + j - 1] then inc(ans);
    write(ans);
close(input);close(output);
end.