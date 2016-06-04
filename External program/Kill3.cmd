@echo off
color 0A
echo 该功能只能在XP系统上使用
set /p A=请输入要结束的进程，输入后摁回车确定:
ntsd -c q -pn %A%
pause