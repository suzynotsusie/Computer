const
    nhap = 'card679.inp';
    xuat = 'card679.out';
var n,i,countT,countD,maxT,maxD,x:longint;
    a:array[1..1000001] of byte;
begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
    readln(n);
    for i:=1 to n div 2 do
    begin
        readln(x);
        a[x]:=1;
    end;
    countD:=1; countT:=1; a[n + 1]:=2;maxD:=0; maxT:=0;
    for i:=1 to n do
    case a[i] of
        1:begin
            if a[i + 1] = 1 then inc(countD) else
            begin
                if countD > maxD then maxD:=countD;
                countD:=1;
            end;
        end;
        0:begin
            if a[i + 1] = 0 then inc(countT) else
            begin
                if countT > maxT then maxT:=countT;
                countT:=1;
            end;
        end;
        end;
    if maxT > maxD then write('TUNG') else if maxT < maxD then write('DUONG') else if a[n] = 0 then write('TUNG') else write('DUONG');



close(input);close(output);
end.