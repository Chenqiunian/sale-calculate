#include <stdio.h>
#include <string.h>

//int a;
//float b, c;
//printf("请输入数字：");
//scanf_s("%2d%3f%4f", &a, &b, &c);
//printf("\n\n输出：");
//printf("a=%d,b=%f,c=%f\n", a, b, c);

/*int num = 5;
printf("%6d", num);*/

/*int x = 0177;
printf("%-2d,%-6d,$%-06d,$%06d,%#6o,%6x", x, x, x, x, x,x);*/

/*double x = 3.1415;
printf("|%6.1f|", x);*/

int main() {

	float f(float x);

	while (1) {
		//水果价格
		float applePrice = 2.5f;
		float pearPrice = 1.8f;
		float bananaPrice = 1.6f;
		float orangePrice = 2.0;

		//水果重量
		int appleWeight , pearWeight, bananaWeight, orangeWeight;

		//是否需要更改价格
		char changePrice[10] = {'\0'};

		while (1)
		{
			printf("BEGIN\n默认苹果2.5元/斤，鸭梨1.8元/斤，香蕉1.6元/斤，橘子2元/斤，是否需要修改价格？（请输入yes或no）");

			scanf("%s", &changePrice);
			
			if (strcmp(changePrice,"no") == 0 ){
				break;
			}
			else if (strcmp(changePrice, "yes") == 0) {
				printf("请输入苹果的价格:");
				scanf("%f", &applePrice);
				printf("\n\n");

				printf("请输入鸭梨的价格:");
				scanf("%f", &pearPrice);
				printf("\n\n");

				printf("请输入香蕉的价格:");
				scanf("%f", &bananaPrice);
				printf("\n\n");

				printf("请输入橘子的价格:");
				scanf("%f", &orangePrice);
				printf("\n\n");
				break;
			}
			else {
				printf("错误：请输入yes或no！！！\n");
			}
		}

		//输入重量
		printf("请输入购买苹果的重量:");
		scanf("%d", &appleWeight);
		printf("\n\n");

		printf("请输入购买鸭梨的重量:");
		scanf("%d", &pearWeight);
		printf("\n\n");

		printf("请输入购买香蕉的重量:");
		scanf("%d", &bananaWeight);
		printf("\n\n");

		printf("请输入购买橘子的重量:");
		scanf("%d", &orangeWeight);
		printf("\n\n");

		//计算总价
		float totalPrice = applePrice * appleWeight + pearPrice * pearWeight + bananaPrice * bananaWeight + orangePrice * orangeWeight;

		//四舍五入
		totalPrice = f(totalPrice);

		float payments;
		printf("请输入顾客的付款金额：");
		scanf("%f", &payments);

		//四舍五入
		payments = f(payments);
		
		//计算应找
		float giveChange = payments - totalPrice;


		//输出记录
		printf("\n\n账单：\n苹果的价格为：%.2lf元/斤，\n鸭梨的价格为：%.2lf元/斤，\n香蕉的价格为：%.2lf元/斤，\n橘子的价格为：%.2lf元/斤。\n\n顾客买了：\n%d斤苹果，\n%d斤鸭梨，\n%d斤香蕉，\n%d斤橘子。\n总价：%.2lf元。\n\n收款%.2lf元，应找：%.2lf元。\nEND\n\n\n",applePrice,pearPrice,bananaPrice,orangePrice,appleWeight,pearWeight,bananaWeight,orangeWeight,totalPrice,payments,giveChange);

		memset(changePrice, '\0', sizeof(changePrice));
	}
	

	return 0;
}


float f(float x) {
	//四舍五入保留两位小数
	int t;
	float f;
	x = x * 1000;
	t = (x + 5) / 10;
	f = (float)t / 100;
	return f;
}