const
    nhap = 'chucai.inp';
    xuat = 'chucai.out';
var s:string;
    i:byte;
    c:char;
    a:array['A'..'Z'] of byte;
begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
    readln(s);
    for i:=1 to length(s) do if s[i] in ['A'..'Z'] then inc(a[s[i]]);
    for c:='A' to 'Z' do if a[c] > 0 then writeln(c,' ',a[c]);
close(input);close(output);
end.
