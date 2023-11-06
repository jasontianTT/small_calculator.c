#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int loop = 0;
int mode = 0;
const double pi = 3.14;

void plus() {
	int plus1;
	int plus2;
	int result10;
	printf("当前模式：加法（仅整数） \n  输入：");
	scanf("%d,%d", &plus1, &plus2);
	result10 = plus1 + plus2;
	printf(" 输出：   加法结果的十进制形式是：%d \n 加法结果的八进制形式是：%o \n 加法结果的十六进制形式是：%X \n\n", result10, result10, result10);
	loop = 1;

}

void min() {
	printf("当前模式：减法（仅整数） \n  输入：");
	int min1;
	int min2;
	int result10;
	scanf("%d,%d", &min1, &min2);
	result10 = min1 - min2;
	printf(" 输出：   减法结果的十进制形式是：%d \n 减法结果的八进制形式是：%o \n 减法结果的十六进制形式是：%X \n\n", result10, result10, result10);
	loop = 1;
}

void mult() {
	printf("当前模式：乘法 \n  输入：");
	float mult1;
	float mult2;
	float result10f;
	scanf("%f,%f", &mult1, &mult2);
	result10f = mult1 * mult2;
	printf(" 输出：   乘法结果的小数形式是：%f \n 乘法结果的指数形式是：%e \n\n", result10f, result10f);
	loop = 1;
}

void dvd() {
	printf("当前模式：除法 \n  输入：");
	float first;
	float second;
	float result10f;
	scanf("%f,%f", &first, &second);
	if (second == 0) {
		printf("除数为0，无法进行除法运算");
	}
	else {
		result10f = first / second;
		printf(" 输出：   除法结果的小数形式是：%f \n 除法结果的指数形式是：%e \n\n", result10f, result10f);
	}

	loop = 1;

}
void mode5(){
			printf("当前模式：判断数字的位数(三位以内正整数) \n  输入：");
			int num;
			int num1 = 0;
			int num10 = 0;
			int num100 = 0;
			scanf("%d", &num);
			printf(" 输出：");
			if (num < 0) {
				printf("要求输入的数为正数\n");
			}
			else if (num > 999) {
				printf("要求输入的数为3位以内的正整数\n");
			}
			else {
				int num0 = 0;
				if (num > 99) {
					num100 = num / 100;
					num = num % 100;
					printf("该数为3位数，百位是%d,", num100);
					num0 = 1;
				}
				if (num > 9) {
					num10 = num10 / 10;
					num = num % 10;
					if (num0 == 0) {
						printf("该数为2位数,");
						num0 = 1;
					}
					printf("十位是%d,", num10);
				}
				if (num > 0) {
					num1 = num;
					if (num0 == 0) {
						printf("该数为1位数,");
						num0 = 1;
					}
					printf("个位是%d\n\n", num1);

				}

			}
			loop = 1;
}

void mode6() {
	printf("当前模式：计算圆面积 \n  输入半径： ");
	double r;
	double result10lf;
	scanf("%lf", &r);
	result10lf = pi * r * r;
	printf(" 输出：   该圆面积是：%lf \n 该圆面积保留两位小数的结果是：%.2f \n\n", result10lf, result10lf);

	loop = 1;
}

void mode7() {
	printf("当前模式：判断闰年 \n  输入（整数）： ");
	int yr;
	int ifrun = 0;
	int run;
	scanf("%d", &yr);
	run = yr / 100;
	if (run != 0) {
		run = yr % 4;
		if (run == 0) {
			ifrun = 1;
		}
	}
	else {
		run = yr % 400;
		if (run == 0) {
			ifrun = 1;
		}
	}
	printf("输出：");
	if (ifrun == 1) {
		printf("%d年是闰年\n\n", yr);
	}
	else {
		printf("%d年是平年\n\n", yr);

	}
	loop = 1;
}



int main()
{

	while (0 <=mode && mode <=24 ) {
		if (mode == 0) {

			printf(" ***********************************\n");
			printf(" *          小小计算器             *\n");
			printf(" *          1 加法                 *\n");
			printf(" *          2 减法                 *\n");
			printf(" *          3 乘法                 *\n");
			printf(" *          4 除法                 *\n");
			printf(" *          5 判断数字位数         *\n");
			printf(" *          6 计算圆面积           *\n");
			printf(" *          7 判断闰年             *\n");
			printf(" ***********************************\n");
			printf("请选择模式（输入数字）：");
			scanf("%d", &mode);
			printf("%d",mode);
			system("cls");
			loop = 0;
		}
		else if (mode == 1) {
			plus();
		}
		else if (mode == 2) {
			min();
		}
		else if (mode == 3) {
			mult();
		}
		else if (mode == 4) {
			dvd();
		}
		else if (mode == 5) {
			mode5();
		}
		else if (mode == 6) {
			mode6();
		}
		else if (mode == 7) {
			mode7();
		}
		else {
			printf("无法识别的选项");
			mode = 0;
			break;
		}
		if (loop) {
			printf("按下回车继续使用此模式，或输入其它任意内容返回主菜单:");
			getchar();
			char input[100];
			fgets(input, sizeof(input), stdin); // 获取用户输入
			if (strlen(input) != 1 && input[0] != '\n') {
				mode = 0;
			}
		}

	}
	return 0;
}
