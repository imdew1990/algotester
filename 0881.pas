program HelloWorld;
var i,j,m,k:integer; a:array[1..10000] of integer;
begin i:=1;
    while not Eoln do begin
    read(a[i]); i:=i+1;  end;
    m:=i-1;
      for i := 1 to m-1 do
        for j := 1 to m-i do
            if a[j] > a[j+1] then begin
                k := a[j];
                a[j] := a[j+1];
                a[j+1] := k;
            end;
    for i:=1 to m do
    write(a[i],' ');
end.