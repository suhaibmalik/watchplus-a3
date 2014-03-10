@echo off

set OLD_DIR = %CD%
set ADDONS=\x\watchplus\addons
set PREFIX=watchplus
REM set OPTIONAL=P:\x\ffaa_comp\optional

REM set TOOL="D:\dev\arma\bin\six-arma-tools.exe"
REM set OPTS=-b

set KEY="P:\x\watchplus\keys\watchplus.biprivatekey"
set SIGN="DSSignFile"

REM set OPTS=-m

set TOOL="makepbo"
set OPTS=-ALBP 



P:
for /d %%F in ("P:%ADDONS%\*") do (
   %TOOL% %OPTS% -@="%ADDONS%\%%~nF" "%ADDONS%\%%~nF" "P:/%ADDONS%/%PREFIX%_%%~nF.pbo"
)
pause
