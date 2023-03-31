var i,j:longint;
    n,t:int64;
    a,b,left,r,l:array[0..100000] of int64;

function min(x,y:int64):int64;
begin
    if x<=y then exit(x)
    else exit(y);
end;
procedure nhap;
var i:longint;
begin
    readln(n);
    for i:=1 to n do read(a[i]);
end;
procedure giai;
begin
    //L[i] = max(a[1],a[2],...,a[i])
    left[1]:=a[1];
    for i:=2 to n - 1 do
        if a[i]>left[i-1] then left[i]:=a[i]
        else left[i]:=left[i-1];
    //R[i] = max(a[i],a[i+1],...,a[n]);
    r[n]:=a[n];
    for i:=n-1 downto 2 do
        if a[i]>r[i+1] then r[i]:=a[i]
         else r[i]:=r[i+1];

    //tinh b[i]= so nuoc dong tren cot i
    for i:=1 to n do
        if min(l[i-1],r[i+1])>a[i] then
            b[i]:=min(l[i-1],r[i+1])-a[i]
        else
            b[i]:=0;
    //cot 1 va cot n chac chan khong co nuoc dong
    t:=0;
    for i:=2 to n-1 do t:=t+b[i];
    writeln(t);
end;
begin
    assign(input,'water.inp'); reset(input);
    assign(output,'water.out');rewrite(output);
    nhap;
    giai;
    close(input);close(output);
end.
