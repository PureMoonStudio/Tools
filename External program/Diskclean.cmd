@echo off

:0

set num=

set /p num=��������Ҫ����Ĵ����̷�,����C,����Ҫ��ð��,Ҫȫ����������������0:

if "%num%"=="" goto 0

set num=%num:~0,1%

if "%num%"=="0" goto 1

@echo.������������,�����ĵȴ�.

defrag %num%: -f

@start Chdiskclean.exe

@shutdown -s -t 10

:1

@echo.������������,�����ĵȴ�.

for %%1 in (c: d: e: f: G: h: i: j: k: l: M: N: O: P: Q: R: S: T: U: V: W: X: Y: Z:) do (if exist %%1 defrag %%1 -f)

@start Chdiskclean.exe

@shutdown -s -t 10