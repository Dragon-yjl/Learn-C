#define _CRT_SECURE_NO_DEPRECATE 1
#include<stdio.h>
int main()
{
	int m, n;  // 两个输入数
	int x, y;  // x 为最大公约数，y 为最小公倍数
	int min, max;  // max 为两个输入数中，较大的一个，min 为较小的一个
	int i;  // 用于 for 循环遍历

	printf("请输入 m 和 n：\n");
	scanf("%d %d", &m, &n);

	min = m > n ? n : m;
	max = m > n ? m : n;

	x = 1;  // 公约数初始化设为 1

	if (max % min == 0) {  // 两个数是倍数关系
		printf("最大公约数：%d\n最小公倍数：%d\n", min, max);
	}
	else {  // 不成倍数
	 // 寻找最大公约数
		for (i = 1; i <= min; i++) {  // 从 1 找到 min
			if (max % i == 0 && min % i == 0)
				x = i;
		}
		// 寻找最小公倍数
		while (max % m != 0 || max % n != 0) {  // 当有一方不能被整除时，继续往后找
			max++;
		}
		y = max;
		printf("最大公约数为：%d\n最小公倍数为：%d", x, y);
	}
}
