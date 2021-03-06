program Project1;
 var a,b,c,d,n,i,j,p,kil:int64; arr,dil:array[1..10000] of int64;
begin
  readln(a,b,c,d);
  readln(n);
  for i:=1 to n do
  readln(arr[i]);

  for i:=1 to n do
  begin
     p:=1; kil:=0;
    for j:=1 to trunc(sqrt(arr[i])) do
    begin
     if( arr[i] mod j)= 0 then begin dil[p]:=j; p:=p+1; end;
    end;
    j:=p-1;
    while( j>0) do
    begin
     if(dil[j]=arr[i] div dil[j]) then j:=j-1;
    dil[p]:=arr[i] div dil[j];
    p:=p+1;
    j:=j-1;
    end;
  for j:=1 to p-1 do
  if(dil[j]<=b) and (dil[j]>=a) then
  if(arr[i] div dil[j]<=d) and (arr[i] div dil[j]>=c) then kil:=kil+1;
   writeln(kil,'/',(b-a+1)*(d-c+1));
  end;
//readln();
end.




