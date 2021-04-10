#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
//五子棋

int end;  // 用于跳出主函数里边的循环，结束游戏
char chess[5][5];  // 棋盘

//初始化棋盘
void init() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			chess[i][j] = ' ';
		}
	}
}

//打印棋盘
void table() {
	printf("+---+---+---+---+---+\n");
	for (int i = 0; i < 5; i++) {
		printf("| %c | %c | %c | %c | %c |\n", chess[i][0], chess[i][1], chess[i][2], chess[i][3], chess[i][4]);
		printf("+---+---+---+---+---+\n");
	}
}

//玩家输入
void PlayerInput() {
	while (1) {
		int x, y;
		scanf("%d %d", &x, &y);
		if (x < 0 || x>4 || y < 0 || y>4) {
			printf("你输入了个什么东西，瞅瞅再来输入！\n");
		}
		if (chess[x][y] == 'x' || chess[x][y] == 'o') {
			printf("这里已经有棋子了，你还是重新找个地方吧！\n");
		}
		else {
			chess[x][y] = 'x';
			break;
		}
	}
}

//电脑输入
void ComputerInput() {
	while (1)
	{
		int x, y;
		x = rand() % 5;
		y = rand() % 5;
		if (x < 0 || x>4 || y < 0 || y>4) {
			;
		}
		if (chess[x][y] == 'x' || chess[x][y] == 'o') {
			;
		}
		else {
			chess[x][y] = 'o';
			break;
		}
	}

}

// 判断是不是玩家赢了
int Pwin() {
	int count = 0;
	for (int i = 0; i < 5; i++) {
		if (chess[i][0] == 'x' && chess[i][1] == 'x' && chess[i][2] == 'x' && chess[i][3] == 'x' && chess[i][4] == 'x') {
			count = 1;
		}
	}
	for (int i = 0; i < 5; i++) {
		if (chess[0][i] == 'x' && chess[1][i] == 'x' && chess[2][i] == 'x' && chess[3][i] == 'x' && chess[4][i] == 'x') {
			count = 1;
		}
	}
	if (chess[0][0] == 'x' && chess[1][1] == 'x' && chess[2][2] == 'x' && chess[3][3] == 'x' && chess[4][4] == 'x') {
		count = 1;
	}
	if (chess[0][4] == 'x' && chess[1][3] == 'x' && chess[2][2] == 'x' && chess[3][1] == 'x' && chess[4][0] == 'x') {
		count = 1;
	}
	return count;
}

// 判断是不是电脑赢了
int Cwin() {
	int count = 0;
	for (int i = 0; i < 5; i++) {
		if (chess[i][0] == 'o' && chess[i][1] == 'o' && chess[i][2] == 'o' && chess[i][3] == 'o' && chess[i][4] == 'o') {
			count = 1;
		}
	}
	for (int i = 0; i < 5; i++) {
		if (chess[0][i] == 'o' && chess[1][i] == 'o' && chess[2][i] == 'o' && chess[3][i] == 'o' && chess[4][i] == 'o') {
			count = 1;
		}
	}
	if (chess[0][0] == 'o' && chess[1][1] == 'o' && chess[2][2] == 'o' && chess[3][3] == 'o' && chess[4][4] == 'o') {
		count = 1;
	}
	if (chess[0][4] == 'o' && chess[1][3] == 'o' && chess[2][2] == 'o' && chess[3][1] == 'o' && chess[4][0] == 'o') {
		count = 1;
	}
	return count;
}

// 判断最终获胜者
void IsWinner() {
	// 1 和棋
	// 2 玩家赢了
	// 3 电脑赢了
	int x = Pwin();
	if (x == 1) {
		printf("厉害厉害，你是大哥，电脑都下不过你\n");
		end = 1;
	}
	int count = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (chess[i][j] == 'x ' || chess[i][j] == 'o') {
				count++;
			}
		}
	}
	if (count == 0) {
		if (Pwin() != 1) {
			printf("你真菜，居然和电脑平局\n");
			end = 1;
		}
	}
	if (count == 0) {
		if (Cwin() != 1) {
			printf("你真菜，连电脑都下不过\n");
			end = 1;
		}
	}

}

int main() {
	init(); // 初始化棋盘
	srand((unsigned)time(0));
	while (1) {
		system("cls");  // 用于清屏，看起来舒服，haha
		table(); // 打印棋盘
		PlayerInput(); // 玩家输入	
		ComputerInput(); // 电脑输入
		IsWinner();
		if (end == 1) {
			table();
			break;
		}
	}
	system("pause");
	return 0;
}