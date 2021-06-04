#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    memset(board, ' ', row * col * sizeof(board[0][0]));
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < col - 1)
                printf("|");

        }
        printf("\n");
        if (i < row - 1)
        {
            for (j = 0; j < col; j++)
            {
                printf("---");
                if (j < col - 1)
                    printf("|");
            }
        }
        printf("\n");
    }

}
void ComeputerMove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("电脑走:>\n");

    while (1)
    {
        x = rand() % row;
        y = rand() % col;
        if (board[x][y] == ' ')
        {
            board[x][y] = '0';
            break;
        }
    }
}
int IsFull(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (board[i][j] == ' ')
                return 0;
        }
    }
    return 1;
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
    int x = 0;
    int y = 0;
    printf("玩家走:>\n");
    while (1)
    {
        printf("请输入坐标:>");
        scanf("%d%d", &x, &y);
        if (x > 0 && x <= row && y > 0 && y <= col)
        {
            if (board[x - 1][y - 1] == ' ')
            {
                board[x - 1][y - 1] = 'x';
                break;
            }
            else
            {
                printf("该坐标已经被占用\n");
            }
        }
        else
        {
            printf("坐标非法\n");
        }
    }
}

char IsWin(char board[ROW][COL], int row, int col)
{
    int i = 0;
    int j = 0;
    int tmp = 0;
    //几子棋
    //int tmp = 0;
    //判断输赢
    for (i = 0; i < row; i++)
    {
        tmp = 0;
        for (j = 0; j < col - 1; j++)
        {
            if ((board[i][j] == board[i][j + 1]) && board[i][j] != ' ')
            {
                ;
            }
            else
            {
                tmp = 1;
                break;
            }
        }
        if (tmp == 0)
        {
            return board[i][j];
        }
    }
    for (j = 0; j < col; j++)

    {
       tmp = 0;
        for (i = 0; i < row - 1; i++)
        {
            if ((board[i][j] == board[i + 1][j]) && board[i][j] != ' ')
            {
                ;
            }
            else
            {
                tmp = 1;
                break;
            }
        }
        if (tmp == 0)
        {
            return board[i][j];
        }
    }


            for (i = 0, j = 0; i < row - 1, j < col - 1; i++, j++)
            {
                
                if ((tmp == 0) && (board[i][j] == board[i + 1][j + 1]) && board[i][j] != ' ')
                {
                    ;
                }
                else
                {
                    tmp = 1;
                    break;
                }
            }
            if (tmp == 0)
            {
                return board[i][j];
            }



            for (i = row, j = 0; i > 0, j < col - 1; i--, j++)
              {
                   tmp = 0;
                    if ((tmp == 0) && (board[i][j] == board[i - 1][j + 1]) && board[i][j] != ' ')
                    {
                        ;
                    }
                    else
                    {
                        tmp = 1;
                        break;
                    }
             }
                if (tmp == 0)
                {
                    return board[i][j];
                }


//三子棋
    for (i = 0; i < row; i++)
    {
        for (j = 1; j < col - 1; j++)
        {
            if ((board[i][j - 1] == board[i][j]) && (board[i][j] == board[i][j + 1]) && board[i][j] != ' ')
            {
                return board[i][j];
            }
        }
    }
    for (j = 0; j < col; j++)
    {
        for (i = 1; i < row - 1; i++)
        {
            if ((board[i - 1][j] == board[i + 1][j]) && (board[i][j] == board[i + 1][j]) && board[i][j] != ' ')
            {
                return board[i][j];
            }
        }

    }
    for (i = 1; i < row - 1; i++)
    {
        for (j = 1; j < col - 1; j++)
        {
            if ((board[i - 1][i - 1] == board[i][i]) && (board[i][i] == board[i + 1][i + 1]) && board[i][j] != ' ')
            {
                return board[i][j];

            }
        }
    }
    for (i = row - 1; i > 0; i--)
    {
        for (j = 1; j < col - 1; j++)
        {
            if ((board[i + 1][j - 1] == board[i][j]) && (board[i][j] == board[i - 1][j + 1]) && board[i][j] != ' ')
            {
                return board[i][j];
            }
        }
    }
    //判断平局
    if (IsFull(board, row, col))
    {
        return 'p';
    }
    //游戏继续
    return ' ';
}
