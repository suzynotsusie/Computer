const
    nhap = 'ktkhac.inp';
    xuat = 'ktkhac.out';
var
    n,i,count:longint;
    x:string;
    j:byte;
    c:char;
    a:array['A'..'Z'] of byte;
begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
    readln(n);
    for i:=1 to n do
    begin
        fillchar(a,sizeof(a),0);
        readln(x);count:=0;
        for j:=1 to length(x) do inc(a[x[j]]);
        for c:='A' to 'Z' do if a[c] > 0 then inc(count);
        writeln(count);
    end;
close(input);close(output);
end.
