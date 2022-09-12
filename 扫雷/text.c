#include"…®¿◊.h"
void medu()
{
	printf("******************************\n");
	printf("*********   1.play  **********\n");
	printf("*********   2.exit  **********\n");
	printf("******************************\n");
	printf("«Î—°‘Ò\n");

}
void Initialize(char arr[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j=0;j<cols;j++)
		{
			arr[i][j] = set;
		}
    }
}
void print(char arr[ROWS][COLS], int row, int col)
{
	int a = 0;
	int i = 0;
	int j = 0;
	for (a = 0; a <=row; a++)
	{
		printf(" %d ", a);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf(" %d ", i);
		
		for (j = 1; j <=col; j++)
		{
			printf(" %c ", arr[i][j]);
		}
		printf("\n");
	}
}
void serbomm(char arr[ROWS][COLS], int row, int col)
{
	int count1 = 10;

	while (count1)
	{
		int a = rand() % 9 + 1;
		int b = rand() % 9 + 1;
		if (arr[a][b]=='0')
		{
			arr[a][b]='1';
			count1--;
		}
	}
}
int see_boom(char arr1[ROWS][COLS], int x, int y)
{
	return arr1[x - 1][y] +
		arr1[x - 1][y - 1] +
		arr1[x][y - 1] +
		arr1[x + 1][y - 1] +
		arr1[x + 1][y] +
		arr1[x + 1][y + 1] +
		arr1[x][y + 1] +
		arr1[x - 1][y + 1] - 8 * '0';
}
int findboom(char arr1[ROWS][COLS], char arr2[ROWS][COLS], int rows, int cols)
{
	int countl = 71;
while (countl)
{
	
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	if (a < 1 || a>9 || b < 1 || b>9)
	{
		printf(" ‰»Î¥ÌŒÛ£¨÷ÿ–¬ ‰»Î\n");
	}
	else
	{
		if (arr1[a][b] == '1')
		{
			printf("±¨’®‡∂\n");
			return 1;
			break;
		}
		else 
		{
			int ret = 0;
			ret = see_boom(arr1, a, b);
			countl--;
			arr2[a][b] = '0' + ret;
			print(arr2, ROW, COL);
		}

	}
}
		if (countl == 0)
		{
			return 10;
		}
		
 }
