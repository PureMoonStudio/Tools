@echo off
color 0A
set /p A=请输入要结束的进程，输入后摁回车确定:
Taskkill /im %A%
pause