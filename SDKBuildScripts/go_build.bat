setlocal
set SdkName=GoSDK
set targetSrc=go
set delSrc=true
set SdkGenArgs=-flags CSharpOnly Beta

call shared_build.bat

endlocal
