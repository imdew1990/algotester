program Project1;
var    s:string; k,i,l:integer;
begin
  readln(s);
  k:=0;
  i:=0;
  for i:=0 to length(s)-1 do
  begin
    if(s[i]=s[i+1]) then k:=k+1;
  end;
  writeln(k);

end.