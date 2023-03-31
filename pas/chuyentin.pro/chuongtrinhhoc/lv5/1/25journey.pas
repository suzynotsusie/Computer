const
    nhap = '25journey.inp';
    xuat = '25journey.out';
var a:array['D'..'U'] of longint;
    tx,ty,x,y,k:longint;
    i,j:longint;
    c:char;
    s:ansistring;
begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
    readln(tx,ty); readln(s);
    x:=0; y:=0;
{D..L..R..U: thu tu tu dien}
    for i:=1 to length(s) do
    case s[i] of
        'D':inc(a['D']);
        'L':inc(a['L']);
        'R':inc(a['R']);
        'U':inc(a['U']);
    end;
    k:=length(s) - a['D'] - a['L'] - a['R'] - a['U'];
    inc(x,a['R']); dec(x,a['L']); dec(y,a['D']); inc(y,a['U']);
    a['R']:=0; a['L']:=0; a['D']:=0; a['U']:=0;
    if x <> tx then if x < tx then
    begin
        a['R']:=tx - x;
        dec(k,a['R']);
    end else
    begin
        a['L']:=x - tx;
        dec(k,a['L']);
    end;
    if y <> ty then if y < ty then
    begin
        a['U']:=ty - y;
        dec(k,a['U']);
    end else
    begin
        a['D']:=y - ty;
        dec(k,a['D']);
    end;
    if k < 0 then
    begin
        write('IMPOSSIBLE');
        exit;
    end else
    if k mod 2 <> 0 then
    begin
        write('IMPOSSIBLE');
        exit;
    end else
    begin
        inc(a['D'],k div 2);
        inc(a['U'],k div 2);
    end;
    writeln(a['D'],' ',a['L'],' ',a['R'],' ',a['U']);
    k:=pos('?',s);
    while k > 0 do
    begin
        for c:='D' to 'U' do if a[c] > 0 then
        begin
            s[k]:=c;
            dec(a[c]);
            break;
        end;
        k:=pos('?',s);
    end;
    writeln(s);
close(input);close(output);
end.
