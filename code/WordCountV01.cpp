#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void CharCount(char *file); //读出有多少个字符
void WordCount(char *file); //读取有多少个单词 
void LineCount(char *file); //读取有多少行 

int main(int argc,char *argv[])
{
	if(argc>3){
		printf("参数输入错误，只能输入两个参数，正确的输入示例：wc.exe -c 文件名");
	}else{
		if(!(strcmp(argv[1],"-c")))
			CharCount(argv[2]);	 
		else if(!(strcmp(argv[1],"-w")))
			WordCount(argv[2]); 
		else if(!(strcmp(argv[1],"-l")))
			LineCount(argv[2]); 
		else
			printf("参数输入错误，只有-c,-w,-l四个参数"); 
	}
	return 0;
}

void CharCount(char *file)//字符统计
{
	FILE *qr = fopen(file, "r");
	int sum = 0; 
	while(fgetc(qr) != EOF)
		sum++;
	printf("the count of char is ：%d.\n",sum-1); //
	fclose(qr);
}

void WordCount(char *file)//单词统计
{
	FILE *qr = fopen(file, "r");
	int sum = 0;
	char character = fgetc(qr);
	//每个单词的首字符一定在[A-Z][a-z][0-9] 之间，第一次碰到的字符在[A-Z][a-z][0-9] 之间是计数器加一。 
	while(character != EOF)
	{
		if((character >= 'a'&&character <= 'z')||(character >= 'A'&&character <='Z')||(character >= '0'&&character <= '9')){
			sum++;
			character = fgetc(qr);
			while((character >= 'a'&&character <= 'z')||(character >= 'A'&&character <='Z')||(character >= '0'&&character <= '9'))
				character = fgetc(qr); //当下一个字符在 [A-Z][a-z][0-9] 之间，就锁定在while里面 。 
		}else{
			character=fgetc(qr);
		}
	}
	printf("the count of word is ：%d.\n",sum);
	fclose(qr);
}

void LineCount(char *file)//行数统计。 
{
	FILE *qr = fopen(file, "r");
	char character = fgetc(qr);
	int sum = 1;
	while(character != EOF){
		if (character == '\n') //简单的判断读出的字符是否是\n就实现了。 
			sum ++;
		character = fgetc(qr);
	}
	printf("the count of line is ：%d.\n",sum-1);
	fclose(qr);
}


