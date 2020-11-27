#include"Function.h"
#include<stdio.h>

int main() {
	char* FileName= (char *)"filetest.txt";
	int* re;
	int sum;
	sum = CharCount(FileName);
	if (sum == 66) printf("the char is true.\n");
	sum = LineCount(FileName);
	if (sum == 13) printf("the line is true.\n");
	sum = WordCount(FileName);
	if (sum == 18) printf("the word is true.\n");
	re = MuiltipleCount(FileName);
	if (re[1] == 6) printf("the code is true.\n");
	if (re[2] == 4) printf("the empty is true.\n");
	if (re[3] == 1)printf("the note is true.\n");
	return 0;
}