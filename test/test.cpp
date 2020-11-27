#include<stdio.h>
#include <stdlib.h>

int main() {
	system("gcc -o ..\\ExecutableFile\\wc ..\\code\\WordCountV02.cpp");
	system("..\\ExecutableFile\\wc.exe -c filetest.txt");
	system("..\\ExecutableFile\\wc.exe -l filetest.txt");
	system("..\\ExecutableFile\\wc.exe -w filetest.txt");
	system("..\\ExecutableFile\\wc.exe -a filetest.txt");
	return 0;
}