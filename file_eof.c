/* file_eof.c -- ��һ���ļ�����ʾ���ļ� */
#include <stdio.h>
#include <stdlib.h>					//Ϊ��ʹ��exit()
int main(void) {
	int ch;
	FILE * fp;
	char fname[50] = {0};					//�����ļ���

	printf("Enter the name of the file: ");
	scanf_s("%s", fname, 50);
	fp = fopen(fname, "r");			//�򿪴���ȡ�ļ�
	if (fp == NULL) {
		printf("Failed tp open file. Bye\n");
		exit(1);
	}
	//getc(fp)�Ӵ򿪵��ļ��л�ȡһ���ַ�
	while ((ch = getc(fp)) != EOF)
		putchar(ch);
	fclose(fp);								//�ر��ļ�

	return 0;
}