#include<stdio.h>
#include <stdlib.h>

int main() {
	system("gcc -o ..\\ExecutableFile\\wc ..\\code\\WordCountV02.cpp");
	system("..\\ExecutableFile\\wc.exe -c ..\\file.txt");
	system("..\\ExecutableFile\\wc.exe -l ..\\file.txt");
	system("..\\ExecutableFile\\wc.exe -w ..\\file.txt");
	system("..\\ExecutableFile\\wc.exe -a ..\\file.txt");
	return 0;
}