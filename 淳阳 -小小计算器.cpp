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
	run = yr % 100;
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

void mode8() {
	float score;
	printf("当前模式：成绩转换 \n  输入（百分制的成绩）：");
	scanf("%f", &score);
	printf("输出：");
	if (score < 0 || score >100) {
		printf("成绩输入错误!\n\n");
	}
	else {
		if (100 >= score && score >= 90) {
			printf("优秀\n\n");
		}
		else if (90 > score && score >= 80) {
			printf("良\n\n");
		}
		else if (80 > score && score >= 70) {
			printf("中\n\n");
		}
		else if (70 > score && score >= 60){
			printf("及格\n\n");
		}
		else if (60 > score && score >= 0) {
			printf("不及格\n\n");
		}
		else {
			printf("error!");
		}

	}

	loop = 1;
}

void mode9() {
	int num;
	int sum=0;
	int check;
	printf("当前模式：计算从1到输入数之间的奇数和 \n  输入(正整数)：");
	scanf("%d",&num);
	printf("输出：");
	check = num % 2;
	if (num > 0&&check==0) {
		for (num=num - 1; num > 0; num = num - 2) {
			if (num > 0) {
				sum = sum + num;
			}
		}
		printf("和：%d\n\n", sum);
	}
	else if (num > 0 && check == 1) {
		for (num = num - 2; num > 0; num = num - 2) {
			if (num > 0) {
				sum = sum + num;
			}
		}
		printf("和：%d\n\n", sum);
	}
	else {
		printf("请输入符合要求的数字！（正整数）\n\n");
	}

	loop = 1;
}

void mode10() {
	int num;
	int sum = 0;
	int check;
	printf("当前模式：计算从1到输入数之间的偶数和 \n  输入(正整数)：");
	scanf("%d", &num);
	printf("输出：");
	check = num % 2;
	if (num > 0 && check == 0) {
		num = num - 2;
		while (num > 0) {
			sum = sum + num;
			num = num - 2;
		}
		printf("和：%d\n\n", sum);
	}
	else if (num > 0 && check == 1) {
		num = num - 1;
		while(num>0) {
			sum = sum + num;
			num = num - 2;
		}
		printf("和：%d\n\n", sum);
	}
	else {
		printf("请输入符合要求的数字！（正整数）\n\n");
	}
	loop = 1;
}

void mode11() {
	int num;
	int check;
	printf("当前模式：输出从1到输入数之间所有3的倍数 \n  输入(正整数)：");
	scanf("%d", &num);
	printf("输出：");
	if (num > 0) {
		check = num % 3;
		if (check == 0) {
			check = check + 3;
		}
		num = num - check;

		do {
			printf("%d  ", num);
			num = num - 3;
		} while (num > 1);
		printf("\n\n");
	}
	else {
		printf("请输入符合要求的数字！（正整数）\n\n");
	}
	loop = 1;
}

void mode12() {
	float num0=0;
	float num1;
	float num2;
	int out = 0;
	printf("当前模式：求即被3整除又被5整除的数 \n  输入(两个数)：");
	scanf("%f,%f", &num1, &num2);
	if (num1 > num2) {
		num0 = num2;
		num1 = num2;
		num1 = num0;
	}
	if (num1 < num2){
		int inum1 = (int)num1;
		if (inum1 != num1) {
			num1 = num1 + 0.5;
			int inum1 = (int)num1;

		}
		do {
			int check3;
			int check5;
			check3 = inum1 % 3;
			check5 = inum1 % 5;
			if (check3 == 0 && check5 == 0) {
				printf("输出：%d \n\n", inum1);
				out = 1;
				break;
			}
			inum1++;
		} while (inum1 < num2);
		if (out == 0) {
			printf("输入的两个数之间未找到既能被3整除又能被5整除的\n\n");
		}
	}
	else {
		printf("请输入符合要求的数字！\n\n");
	}
	loop = 1;
}

void mode13() {
	int num = 100;
	int num1=0;
	int num10=0;
	int num100=1;
	printf("当前模式：求水仙花数（无需输入） \n  ");
	printf("输出：\n");
	while (num<=999) {
		for (num10 = 0; num100 <= 9; num100++) {
			num10 = 0;
			for (num1 = 0; num10 <= 9; num10++) {
				num1 = 0;
				for (; num1 <= 9; num1++) {
					if (num == num1 * num1 * num1 + num10 * num10 * num10 + num100 * num100 * num100) {
						printf(" %d ",num);
					}
					num++;
				}
			}
		}

	}

	printf("\n\n");
	loop = 1;
}

int module14_1(int a,int b) {
	int max;
	if (a > b) {
		max = a;
	}
	else {
		max = b;
	}
	return max;
}

void mode14() {
	int f;
	int s;
	printf("当前模式：求最大值 \n  输入(两个整数)：");
	scanf("%d,%d", &f, &s);
	printf("输出最大值：%d \n\n", module14_1(f, s));
	
	loop = 1;
}

void module15_1(int first, int second) {
	int temp;
	if (first < second) {
		temp = second;
		second = first;
		first = temp;
	}
}

void mode15() {
	int f;
	int s;
	printf("当前模式：求最大最小值 \n  输入(两个整数)：");
	scanf("%d,%d", &f, &s);
	module15_1(f, s);
	printf("输出：\n 最大值：%d \n 最小值：%d \n",f,s); 

	loop = 1;
}

void mode16() {
	int arr[10];
	int num = 1;
	printf("当前模式：冒泡排序 \n  输入(10个数)：\n");
	for (int i = 0; i < 10; i++) {
		printf("第%d个数：", num);
		num++;
		scanf("%d", &arr[i]);
	}
	printf("将被排序的十个数：");
	for (int i = 0; i < 10; i++) {
		printf(" %d ", arr[i]);
		if (i < 9) {
			printf(",");
		}
	}
	printf("\n输出：");
	int stop = 0;
	int times=0;
	while (stop == 0) {
		int i = 0;
		times = 0;
		for (; i + 1 < 10; i++) {
			int first = arr[i];
			int second = arr[i + 1];
			if (first > second) {
				arr[i] = second;
				arr[i + 1] = first;
			}
			else {
				times++;
				if (times == 9) {
					stop = 1;
				}
			}
		}
	}
	int* p;
	for (int i = 0; i < 10; i++) {
		p = &arr[i];
		printf(" %d ", *p);
		if (i < 9) {
			printf(",");
		}
	}
	printf("\n\n");
	loop = 1;
}

void mode17() {
	int arr[3][4];
	printf("当前模式：矩阵转置 \n  输入(3x4矩阵)：\n");
	for (int i = 0; i < 3; i++) {
		printf("请输入第%d行,\n ",i+1);
		for (int j = 0; j < 4; j++) {
			printf(" 第%d个数字：",j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("将要转置的矩阵：\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf(" %d ", arr[i][j]); //此处可优化为数字对齐（懒得做）
		}
		printf("\n");
	}
	int arr2[4][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			arr2[j][i] = arr[i][j];
		}
	}
	printf("输出：\n");
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			printf(" %d ", arr2[i][j]);  //此处可优化为数字对齐（懒得做）
		}
		printf("\n");
	}
	loop = 1;
}

void mode18() {
	int arr[3][3];
	printf("当前模式：求主对角线和 \n  输入(3x3矩阵)：\n");
	for (int i = 0; i < 3; i++) {  //copy from mode17
		printf("请输入第%d行,\n ", i + 1);
		for (int j = 0; j < 3; j++) {
			printf(" 第%d个数字：", j + 1);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("将要被处理的矩阵：\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf(" %d ", arr[i][j]); //此处可优化为数字对齐（懒得做）
		}
		printf("\n");
	}
	int sum=0;
	for (int i = 0; i < 3; i++) {
		sum = sum + arr[i][i];
	}
	printf("和： %d \n\n",sum);
	loop = 1;
}

void mode19() {
	printf("当前模式：统计单词个数 \n  输入(一串字符)：");
	int space = 0;
	int stop = 0;
	char s;
	getchar();
	while (stop==0) {
		scanf("%c",&s);
		if (s == 32) {
			space++;
		}
		if (s == 10) {
			stop=1;
		}
	}
	printf("输出：\n 空格个数： %d \n\n",space);

	loop = 1;
}

void mode20() {
	printf("当前模式：静态创建链表 \n  输入：");

	printf("输出：");




	loop = 1;
}

void mode21() {
	printf("当前模式：动态创建链表 \n  输入：");
	printf("输出：");




	loop = 1;
}

void mode22() {
	printf("当前模式：学生成绩排序 \n  输入：");
	printf("输出：");




	loop = 1;
}

void mode23() {
	printf("当前模式：学生成绩普涨10分 \n  输入：");
	printf("输出：");




	loop = 1;
}

void mode24() {
	printf("当前模式：学生成绩链表 \n  输入：");
	printf("输出：");




	loop = 1;
}


int main()
{

	while (0 <= mode && mode <= 24) {
		switch (mode) {

		case 0:
			printf(" ********************************************************\n");
			printf(" *                   小小计算器                         *\n");
			printf(" *                   1 加法                             *\n");
			printf(" *                   2 减法                             *\n");
			printf(" *                   3 乘法                             *\n");
			printf(" *                   4 除法                             *\n");
			printf(" *                   5 判断数字位数                     *\n");
			printf(" *                   6 计算圆面积                       *\n");
			printf(" *                   7 判断闰年                         *\n");
			printf(" *                   8 成绩转换                         *\n");
			printf(" *                   9 计算从1到输入数之间的奇数和      *\n");
			printf(" *                   10 计算从1到输入数之间的偶数和     *\n");
			printf(" *                   11 输出从1到输入数之间所有3的倍数  *\n");
			printf(" *                   12 求即被3整除又被5整除的数        *\n");
			printf(" *                   13 求水仙花数                      *\n");
			printf(" *                   14 求最大值                        *\n");
			printf(" *                   15 求最大最小值                    *\n");
			printf(" *                   16 冒泡排序                        *\n");
			printf(" *                   17 矩阵转置                        *\n");
			printf(" *                   18 求对角线和                      *\n");
			printf(" *                   19 统计单词个数                    *\n");
			printf(" *                   20 静态创建链表                    *\n");
			printf(" *                   21 动态创建链表                    *\n");
			printf(" *                   22 学生成绩排序                    *\n");
			printf(" *                   23 学生成绩普涨10分                *\n");
			printf(" *                   24 学生成绩链表                    *\n");
			printf(" *                   25 退出                            *\n");
			printf(" ********************************************************\n");
			printf("请选择模式（输入数字）：");
			scanf("%d", &mode);
			printf("%d", mode);
			system("cls");
			loop = 0;
			break;

		case 1:
			plus();
			break;
		case 2:
			min();
			break;
		case 3:
			mult();
			break;
		case 4:
			dvd();
			break;
		case 5:
			mode5();
			break;
		case 6:
			mode6();
			break;
		case 7:
			mode7();
			break;
		case 8:
			mode8();
			break;
		case 9:
			mode9();
			break;
		case 10:
			mode10();
			break;
		case 11:
			mode11();
			break;
		case 12:
			mode12();
			break;
		case 13:
			mode13();
			break;
		case 14:
			mode14();
			break;
		case 15:
			mode15();
			break;
		case 16:
			mode16();
			break;
		case 17:
			mode17();
			break;
		case 18:
			mode18();
			break;
		case 19:
			mode19();
			break;
		case 20:
			mode20();
			break;
		case 21:
			mode21();
			break;
		case 22:
			mode22();
			break;
		case 23:
			mode23();
			break;
		case 24:
			mode24();
			break;
		default:
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
			printf("\n");
		}
		
	}
	return 0;
}
