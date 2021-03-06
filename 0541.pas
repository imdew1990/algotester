program project1;
var p,i,n:integer; s,l:string;  t:char;
begin
   readln(s); l:=s; n:=length(s);
   for i:=1 to n do  begin
   s[i]:=t;
   if t<>' ' then begin p:=p+1; delete(s,i,1); end;
   if l[i]=l[i+1] then p:=p-1;

   end;
   writeln(p);
   readln(p);
end.