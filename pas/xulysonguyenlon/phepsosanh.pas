const
    nhap = 'phepsosanh.inp';
    xuat = 'phepsosanh.out';
function cmp(a,b:string):integer;
begin
    while length(a) < length(b) do a:='0' + a;
    while length(b) < length(a) do b:='0' + b;
    if a = b then exit(0);
    if a > b then exit(1);
    exit(-1);
end;
var a,b:int64;
    as,bs:string;
begin
assign(input, nhap);reset(input);
assign(output, xuat);rewrite(output);
    read(a,b);
    str(a,as);
    str(b,bs);
    write(cmp(as,bs));
close(input);close(output);
end.
