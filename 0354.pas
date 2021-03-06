program vidstan;
var sd,su,v,td,tu:real;
begin
read(sd,su,v); writeln;
td:=(sd/v)/2;
tu:=(su/v)*2;
if td<tu then writeln('Down')
         else if td>tu then writeln('Up')
                       else writeln('Never mind');
                       end.
