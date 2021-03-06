program vitrak;
var xz, yz, xc, yc, k, k1:real; i, n:integer; l:byte;
x:array[1..10000] of real; y:array[1..10000] of real;
begin
readln(xz, yz);
readln(xc, yc);
readln(n);
for i: = 1 to n do begin
read(x[i]); readln(y[i]); end;
k: = sqrt(sqr(xz - xc) + sqr(yz - yc));
for i: = 1 to n do begin
k1 : = sqrt(sqr(x[i] - xc) + sqr(y[i] - yc));
if k1 >= k then l : = 1;
end;
if l = 1 then writeln('YES')
else writeln('NO');
end.
