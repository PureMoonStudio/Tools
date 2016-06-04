@echo off

:0

set num=

set /p num=请输入你要整理的磁盘盘符,比如C,不需要带冒号,要全盘整理请输入数字0:

if "%num%"=="" goto 0

set num=%num:~0,1%

if "%num%"=="0" goto 1

@echo.命令正在运行,请耐心等待.

defrag %num%: -f

@start Chdiskclean.exe

@shutdown -s -t 10

:1

@echo.命令正在运行,请耐心等待.

for %%1 in (c: d: e: f: G: h: i: j: k: l: M: N: O: P: Q: R: S: T: U: V: W: X: Y: Z:) do (if exist %%1 defrag %%1 -f)

@start Chdiskclean.exe

@shutdown -s -t 10