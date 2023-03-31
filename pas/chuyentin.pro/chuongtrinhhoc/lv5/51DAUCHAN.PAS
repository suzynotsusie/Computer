const
    nhap = '51DAUCHAN.INP';
    xuat = '51DAUCHAN.OUT';
var n:ansistring;
    check:byte;
    count, ans, i:longint;
begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
ans:=0; count:=0;
    read(n);
    if (pos('))',n) = 0)or(pos('((',n) = 0) then
    begin
        write(0);
        halt;
    end;
    for i:=1 to length(n) - 1 do
        if n[i] + n[i + 1] = '((' then
        begin
            check:=1;
            inc(count);
        end else
        if n[i] + n[i + 1] = '))' then if check = 1 then ans:=ans+ count;
    write(ans);
close(input);close(output);
end.