program Project1;
var s:string[9]; n,i:longint; a:array[1..7] of longint;
begin
readln(s); readln(n);
case s of
'Monday': i:=1;
'Tuesday': i:=2;
'Wednesday': i:=3;
'Thursday': i:=4;
'Friday': i:=5;
'Saturday': i:=6;
'Sunday': i:=7;
end;
while ((i<=7) and (n>=1)) do
begin
    inc(a[i],1);
     dec(n,1);
  if i=7 then i:=1
         else inc(i,1);
end;
for i:=1 to 7 do
write(a[i],' ');
readln(s);
end.