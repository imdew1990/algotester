program Project1;
 var a,b:array[1..100] of integer;  x,i,k1:integer;
begin
  readln(x);
  for i:=1 to x do
  readln(a[i],b[i]);
  for i:=1 to x do begin  k1:=b[i];
  if ((a[i]=1) and (k1 mod 2=0)) or ((a[i] mod 2=0) and (b[i]=1)) then writeln('2')
                                 else if ((a[i]=1) and (k1 mod 2<>0)) or ((b[i]=1) and (a[i] mod 2<>0)) then writeln('3')
                                                                      else writeln('0');  end;


end.