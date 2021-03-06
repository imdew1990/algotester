program Project1;
var   a,b:longint;
begin
 readln(a,b);
 if(a+1=b) or (b+1=a) then writeln('-1')
 else writeln(trunc((a+b)/2));
 readln(a);
end.