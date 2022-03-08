#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	FILE* pFile;
	pFile = fopen("example.txt", "w");
	fputs("This is an apple.", pFile);
	fseek(pFile, 9, SEEK_SET);
	fputs(" sam", pFile);
	fclose(pFile);
	return 0;
}