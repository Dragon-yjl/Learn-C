#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//三子棋

int Menu() {
	printf("===================\n");
	printf("欢迎来到三子棋游戏!\n");
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
	printf("===================\n");
	printf("请输入你的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

#define  MAX_ROW 3
#define  MAX_COL 3

void Init(char chessBoard[MAX_ROW][MAX_COL]) {
	for (int row = 0; row < MAX_ROW; row++) {
		for (int col = 0; col < MAX_COL; col++) {
			chessBoard[row][col] = ' ';
			srand((unsigned int) time(0));
		//memset(chessBoard,' 'MAX_ROW*MAX_COL*sizeof())
		}
	}

}
void Print(char chessBorad[MAX_ROW][MAX_COL]) {
//把棋盘内容打印出来
	for(int row = 0; row < MAX_ROW;row++) {
		printf("+---+---+---+\n");
		printf("| %c | %c | %c | \n",chessBorad[row][0],
			chessBorad[row][1], chessBorad[row][2]);
		
	}
printf("+---+---+---+\n");
}

void PlayerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("轮到玩家落子!\n");
	while (1) {
		printf("请输入您要落子位置的坐标（row col）:");
		int row = 0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//对用户输入进行校验
		if (row < 0 || row >= MAX_ROW
			|| col < 0 || col >= MAX_COL) {
			printf("您的输入有误!\n");
			continue;
		}
		if (chessBoard[row][col] != ' ') {
		//该位置已经有子
			printf("该位置已经有子了!\n");
			continue;
		}
		chessBoard[row][col] = 'X';
		break;
    }
}

void ComputerMove(char chessBoard[MAX_ROW][MAX_COL]) {
	printf("轮到电脑落子!\n");
	while (1) {
		int row = rand() % MAX_ROW;
		int col = rand() % MAX_COL;
		if (chessBoard[row][col] != ' ') {
			continue;//已经有子
		}
		chessBoard[row][col] = '0';
		break;
	}
}

//判定棋盘是否满了，满了返回1，否则返回0
int IsFull(char chessBoard[MAX_ROW][MAX_COL]) {
//查找一下棋盘上是否有空位
	for (int row = 0; row < MAX_ROW;row++) {
		for (int col = 0; col < MAX_COL; col++) {
			if (chessBoard[row][col] == ' ') {
				return 0;//找到空位
			}
		}
	}
	return 1;//所有位置找完了，没找到空格
}
//返回值表示游戏状况
//1返回X表示玩家获胜
//2返回0表示电脑获胜
//3返回‘ ’
char Check(char chessBoard[MAX_ROW][MAX_COL]) {
	//1检查所有行，是否有连成三个子
	for (int row = 0; row < MAX_ROW; row++) {
		if (chessBoard[row][0] != ' '
			&& chessBoard[row][0] == chessBoard[row][1]
			&& chessBoard[row][0] == chessBoard[row][2])
			return chessBoard[row][0];
	}
	//2检查列是否三个子
	for (int col = 0; col < MAX_ROW; col++) {
		if (chessBoard[col][0] != ' '
			&& chessBoard[0][col] == chessBoard[1][col]
			&& chessBoard[0][col] == chessBoard[2][col])
			return chessBoard[0][col];
	}

	//3检查对角线是否三个子
	if (chessBoard[0][0] != ' '
		&& chessBoard[0][0] == chessBoard[1][1]
		&& chessBoard[0][0] == chessBoard[2][2]) {
		return chessBoard[0][0];
	}
	if (chessBoard[0][2] != ' '
		&& chessBoard[0][2] == chessBoard[1][1]
		&& chessBoard[0][2] == chessBoard[2][0]) {
		return chessBoard[0][2];
	}
	//4判定是否和棋
	if (IsFull(chessBoard)) {
		return 'Q';
	}
	return ' ';
}

void Game() {
	//一局游戏的核心函数
	//1，创建并初始化一个棋盘（字符类型的二维数组）
	//尽量避免使用魔幻数字magic number
	//最好给[]里面数字起一个合适的名字
	char chessBoard[MAX_ROW][MAX_COL] = {0};
	Init(chessBoard);
	char winner=' ';
	while (1) {
		//2，先打印棋盘
		Print(chessBoard);
		//3，提示玩家落子（输入坐标）
		PlayerMove(chessBoard);
		//4，检查游戏是否结束
		winner = Check(chessBoard);
		if (winner !=' ') {
			break;
		}
		//5，电脑进行落子
		ComputerMove(chessBoard);
		//6，检查游戏是否结束
		winner = Check(chessBoard);
		if (winner !=' ') {
			break;
		}
		//7，回到2继续执行
	}
	Print(chessBoard);
	if (winner == 'X') {
		printf("恭喜你，你赢了！\n");
	}
	else if (winner=='0') {
		printf("你很菜，连电脑都干不过!\n");
	}
	else {
		printf("你真菜，和电脑五五开!\n");
	}
}
int main() {
	while (1) {
		int choice = Menu();
		if (choice == 1) {
			Game();
		}
		else if (choice == 0) {
			printf("goodbye!\n");
			break;
		}
		else {
			printf("您的输入有误!\n");
		}
	}
}