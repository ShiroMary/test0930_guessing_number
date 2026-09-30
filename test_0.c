#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#include <windows.h>

int main() {
	//SetConsoleOutputCP(CP_UTF8);
	int a;
	int count = 0;
	srand(time(0));
	int number = rand() % 100 + 1;
	do {
		printf("请猜测这个1~100的整数：\n");
		scanf_s("%d", &a);
		count++;
		if (a < number) {
			printf("您猜得太小了。\n");
		}
		else if (a > number) {
			printf("您猜得太大了。\n");
		}
	} while (a != number);
	printf("您猜对了！用了%d次。\n", count);
	return 0;
}