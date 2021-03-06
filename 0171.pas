program rgh;
var n, i:longint; x1, x2, y1, y2, d, s:real;
begin
readln(n);
for i:= 1 to n do begin
readln(x1, y1, x2, y2);
d:=sqrt(sqr(x1 - x2) + sqr(y1 - y2));   
s:=s+d;  
end;
writeln(s:0:0);
end.
