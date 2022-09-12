#include"扫雷.h"
int main()
{
	int a = 0;
	int c = 0;
	char arr1[ROWS][COLS];
	char arr2[ROWS][COLS];
	do
	{
		srand((unsigned int)time(NULL));
		medu();
		scanf("%d",&a);
		switch (a)
		{
		case(1):
			Initialize(arr1, ROWS, COLS, '0');
			Initialize(arr2, ROWS, COLS, '*');
	/*		print(arr1,ROW,COL);*/
			print(arr2,ROW,COL);
			serbomm(arr1,ROWS,COLS);
			print(arr1, ROW, COL);
		/*	findboom(arr1,arr2, ROWS, COLS);*/ //如果再加上这一句，下一句也会运行，直接c=就行
			c= findboom(arr1, arr2, ROWS, COLS);
			if (c == 10)
			{
				printf("恭喜你，你赢了\n");
				print(arr2, ROW, COL);
				break;
			}
			else if (c == 1)
			{
				break;
			}
		
		case(2):
			printf("退出游戏\n");
			break;
		}
	} while (a-2);


	return 0;
}