const
    nhap = 'bintohex.inp';
    xuat = 'bintohex.out';
function bin4todec(b:string):integer;
var s,ans,num,i:byte;
begin
    ans:=0;s:=1;
    for i:=4 downto 1 do
    begin
        if b[i] = '1' then ans:=ans+s;
        s:=s*2;
    end;
    bin4todec:=ans;
end;
var bin,ans:string;
    hex:array[1..15] of char;
    i:integer;
begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
    read(bin);ans:='';
    while (length(bin) mod 4) <> 0 do bin:='0'+bin;
    for i:=1 to 9 do hex[i]:=chr(i+48);
    hex[10]:='A';hex[11]:='B';hex[12]:='C';hex[13]:='D';hex[14]:='E';hex[15]:='F';
    for i:=length(bin) div 4 downto 1 do ans:=hex[bin4todec(copy(bin,4*i-3,4))]+ans;

    write(ans);
close(input);close(output);
end.
