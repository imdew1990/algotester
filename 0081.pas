program d;
var k,dov,r:longint; s,slovo:ansistring;     i:longint;
begin r:=0;                i:=1;
readln(k);
readln(s);
dov:=length(s);
while(i<=dov) and (r<=k) do
begin
slovo:=copy(s,i,6);
if(slovo='TOILET') then begin r:=r+1; i:=i+6; end
else i:=i+1;
end;
//writeln('r=',r);
if r<>k then writeln('NO')
       else writeln('YES');
 readln(k);
end.


