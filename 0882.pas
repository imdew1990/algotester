program NSDNSK;

function NSD(m,n:qword):qword;
begin
If m<>0 then NSD:=NSD(n mod m,m) else NSD:=n;
end;
function NSK(m,n:qword):qword;
begin
NSK:=(m div NSD (m,n))*n;
end;
var x,y,z: qword;
begin


readln(x,y,z);
writeln (NSK(NSK(x,y),z));
readln;
end.