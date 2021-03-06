//fpc 3.0.0

program HelloWorld;
var n, i:integer; a:array[1..47]of string; s, key, key1:string;
begin
readln(n);
for i: = 1 to n do
readln(a[i]);
readln(s);
key: = '[ ] ' + s;
key1: = '[/] ' + s;
for i: = 1 to n do
if (a[i] = key) then writeln(key1)
else writeln(a[i]);
// writeln(key);
end.

