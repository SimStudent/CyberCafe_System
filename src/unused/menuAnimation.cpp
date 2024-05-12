#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
using namespace std;
#define IN_RED SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), \
BACKGROUND_RED |                 \
BACKGROUND_INTENSITY)
#define IN_GREEN SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), \
BACKGROUND_GREEN |               \
BACKGROUND_INTENSITY)
#define IN_BULE SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), \
BACKGROUND_BLUE |                \
BACKGROUND_INTENSITY)
#define IN_YELLOW SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), \
BACKGROUND_RED |                 \
BACKGROUND_GREEN |           \
BACKGROUND_INTENSITY)
#define IN_CYAN SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), \
BACKGROUND_GREEN |               \
BACKGROUND_BLUE |            \
BACKGROUND_INTENSITY)
#define IN_MAGENTA SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), \
BACKGROUND_BLUE |                \
BACKGROUND_RED |             \
BACKGROUND_INTENSITY)
#define IN_WHITE SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), \
BACKGROUND_RED |                 \
BACKGROUND_GREEN |           \
BACKGROUND_BLUE |            \
BACKGROUND_INTENSITY)
#define IN_DEFAULT SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), \
FOREGROUND_RED |                 \
FOREGROUND_GREEN |           \
FOREGROUND_BLUE)
#define UPKEY 72
#define DOWNKEY 80

void Menu()
{
	printf("欢迎来到学生奖学金管理系统\n");
	printf("**************************************************\n");
	printf("0) 退出程序\n");
	printf("1) 录入学生信息\n");
	printf("2) 显示全部学生信息\n");
	printf("3) 查找学生信息\n");
	printf("4) 删除学生信息\n");
	printf("5) 追加学生信息\n");
	printf("6) 修改学生信息\n");
	printf("7) 统计学生信息\n");
	printf("8) 奖学金名单\n");
	printf("9) 保存文件\n");
	printf("10)备份文件\n");
	printf("**************************************************\n");
	printf("请使用↑、↓和enter来实现选择和执行命令\n");
	printf("或者输入每个命令前面的数字来执行命令<0 - 9>\n");
	return;
}

void CursorPos1(int x)
{
	switch (x)
	{
	case 0:
		printf("0) 退出程序                                       ");
		break;
	case 1:
		printf("1) 录入学生信息                                   ");
		break;
	case 2:
		printf("2) 显示全部学生信息                               ");
		break;
	case 3:
		printf("3) 查找学生信息                                   ");
		break;
	case 4:
		printf("4) 删除学生信息                                   ");
		break;
	case 5:
		printf("5) 追加学生信息                                   ");
		break;
	case 6:
		printf("6) 修改学生信息                                   ");
		break;
	case 7:
		printf("7) 统计学生信息                                   ");
		break;
	case 8:
		printf("8) 奖学金名单                                     ");
		break;
	case 9:
		printf("9) 保存文件                                       ");
		break;
	case 10:
		printf("10)备份文件                                       ");
	}
	return;
}

void TheConsoleSize(int width, int height)
{
	char chCmd[32];
	sprintf(chCmd, "mode con cols=%d lines=%d", width, height);
	system(chCmd);
	return;
}

void Gotoxy(int x, int y)
{
	COORD pos = {x, y};
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, pos);
	return;
}

int CursorOpr(int line, int deta, int lower, int upper, void (*p)(int))
{
	/*
	line：当前光标所在行数
	deta：行数与菜单选项的差值。比如在main菜单中选项(0)在第2行(行数从0开始计算)，所以deta等于2，即2 - 0
	upper, lower：选项的上下界
	(*P)(int)：函数指针，选择哪个覆盖菜单
	*/
	char c1, c2;
	Gotoxy(0, line);
	do
	{
		c2 = getch();
		if (c2 == DOWNKEY)
		{
			Gotoxy(0, line);
			IN_DEFAULT; //选择默认色
			(*p)(line - deta); //覆盖，实现退选
			if (line == upper) //如果已经到了上界，则返回下界，实现滚动高亮
				line = lower;
			else
				++line; //
			Gotoxy(0, line);
			IN_CYAN;
			(*p)(line - deta);
		}
		if (c2 == UPKEY)
		{
			Gotoxy(0, line);
			IN_DEFAULT;
			(*p)(line - deta);
			if (line == lower)
				line = upper;
			else
				--line;
			Gotoxy(0, line);
			IN_CYAN;
			(*p)(line - deta);
		}
	} while ((c1 = getch()) != '\r');
	IN_RED;
	Gotoxy(0, line);
	(*p)(line - deta);
	IN_DEFAULT;
	return line - deta;
}

int main()
{
	int n, line = 2; // 对应menu()的1）
	char c1, c2;
	bool b;
	while (1)
	{
		system("cls");
		TheConsoleSize(80, 50);
		Menu();
		if ((c1 = getch()) == -32)
		{
			n = CursorOpr(line, 2, 2, 12, CursorPos1);
		}
		else
		{
			char tmp;
			scanf("%c", &tmp);
			if (tmp >= '0' && tmp <= '9')
				n = tmp - '0';
			else
				n = tmp;
		}
	}
	system("pause");
	return 0;
}

