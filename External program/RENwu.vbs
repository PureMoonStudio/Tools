do
If createobject("wscript.shell").appactivate("Windows ���������")=true then
wscript.createobject("wscript.shell").Sendkeys "{Esc}"
else
End if
wscript.sleep 50
Loop