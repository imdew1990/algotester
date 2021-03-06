program Project1;
var  h,w,i,j,kil:longint; a:array[1..100,1..100]of integer;
begin     kil:=0;
   readln(h,w);
   for i:=1 to h do
   for j:=1 to w do    begin read(a[i,j]);   kil:=a[i,j]+kil; end;
    writeln(kil);
   for i:=h downto 1 do
   for j:=w downto 1 do
   begin
     if a[i,j]=0 then continue
     else

       while a[i,j]>0 do
          begin

            writeln(i,' ',j,' ',a[i,j]);
            a[i,j]:=a[i,j]-1;
          end;
   end;
   readln(h);
end.