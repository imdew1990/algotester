program Project1;
var s,s1:ansistring; a,b:array[1..10000000]of longint;
  i,r:longint; dudik,p:longint; k,k1:longint;
begin
  readln(s);                 s1:='';
  for i:=1 to length(s) do
  if s[i]=' ' then begin dudik:=i;   break; end;
  s1:=copy(s,dudik+1,length(s)-i);    delete(s,dudik,length(s)-i+1);

 k1:=length(s1);
 k:=length(s);

 for i:=1 to k do begin
 val(s[k-i+1],a[i]);   end;
 for i:=1 to k1 do begin
 val(s1[k1-i+1],b[i]);   end;
  r:=0; if k>k1 then k1:=k;
 for i:=1 to k1 do
 begin
 b[i]:=b[i]+a[i]+r;
 if b[i]>=10 then begin
   dec(b[i],10);
   r:=1;
 end else
 r:=0; end;
 if r=1 then begin
   k1:=k1+1;
   b[k1]:=r;
 end;       for i:=k1 downto 1 do
 write(b[i]);

end.


