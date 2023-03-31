const
    nhap = '34catghep.inp';
    xuat = '34catghep.out';
function xdx(s:string):boolean;
var i:byte;
begin
    for i:=1 to length(s) div 2 do if s[i] <> s[length(s) - i + 1] then exit(false);
    exit(true);
end;
var s:ansistring;
    i:byte;
begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
    read(s);
    for i:=1 to length(s) - 1 do
    begin
        s:=s+s[1];
        delete(s,1,1);
        if xdx(s) then
        begin
            write(i);
            exit;
        end;
    end;
    write(0);
close(input);close(output);
end.
