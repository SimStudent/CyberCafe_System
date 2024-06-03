d:
cd D:\Work\Coding\Multiple_Cpp\HomeWork\CyberCafe_System\src
del output\main.exe

mkdir output
mkdir resources

windres.exe resources\manager.rc output\manager.o

g++ *.cpp  output\manager.o  -finput-charset=UTF-8 -fexec-charset=GBK -o output\main
output\main.exe
pause