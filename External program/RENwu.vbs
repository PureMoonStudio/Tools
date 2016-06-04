do
If createobject("wscript.shell").appactivate("Windows 任务管理器")=true then
wscript.createobject("wscript.shell").Sendkeys "{Esc}"
else
End if
wscript.sleep 50
Loop