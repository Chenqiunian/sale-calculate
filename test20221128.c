#include <stdio.h>
#include <string.h>

//int a;
//float b, c;
//printf("���������֣�");
//scanf_s("%2d%3f%4f", &a, &b, &c);
//printf("\n\n�����");
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
		//ˮ���۸�
		float applePrice = 2.5f;
		float pearPrice = 1.8f;
		float bananaPrice = 1.6f;
		float orangePrice = 2.0;

		//ˮ������
		int appleWeight , pearWeight, bananaWeight, orangeWeight;

		//�Ƿ���Ҫ���ļ۸�
		char changePrice[10] = {'\0'};

		while (1)
		{
			printf("BEGIN\nĬ��ƻ��2.5Ԫ/�Ѽ��1.8Ԫ/��㽶1.6Ԫ/�����2Ԫ/��Ƿ���Ҫ�޸ļ۸񣿣�������yes��no��");

			scanf("%s", &changePrice);
			
			if (strcmp(changePrice,"no") == 0 ){
				break;
			}
			else if (strcmp(changePrice, "yes") == 0) {
				printf("������ƻ���ļ۸�:");
				scanf("%f", &applePrice);
				printf("\n\n");

				printf("������Ѽ��ļ۸�:");
				scanf("%f", &pearPrice);
				printf("\n\n");

				printf("�������㽶�ļ۸�:");
				scanf("%f", &bananaPrice);
				printf("\n\n");

				printf("���������ӵļ۸�:");
				scanf("%f", &orangePrice);
				printf("\n\n");
				break;
			}
			else {
				printf("����������yes��no������\n");
			}
		}

		//��������
		printf("�����빺��ƻ��������:");
		scanf("%d", &appleWeight);
		printf("\n\n");

		printf("�����빺��Ѽ�������:");
		scanf("%d", &pearWeight);
		printf("\n\n");

		printf("�����빺���㽶������:");
		scanf("%d", &bananaWeight);
		printf("\n\n");

		printf("�����빺�����ӵ�����:");
		scanf("%d", &orangeWeight);
		printf("\n\n");

		//�����ܼ�
		float totalPrice = applePrice * appleWeight + pearPrice * pearWeight + bananaPrice * bananaWeight + orangePrice * orangeWeight;

		//��������
		totalPrice = f(totalPrice);

		float payments;
		printf("������˿͵ĸ����");
		scanf("%f", &payments);

		//��������
		payments = f(payments);
		
		//����Ӧ��
		float giveChange = payments - totalPrice;


		//�����¼
		printf("\n\n�˵���\nƻ���ļ۸�Ϊ��%.2lfԪ/�\nѼ��ļ۸�Ϊ��%.2lfԪ/�\n�㽶�ļ۸�Ϊ��%.2lfԪ/�\n���ӵļ۸�Ϊ��%.2lfԪ/�\n\n�˿����ˣ�\n%d��ƻ����\n%d��Ѽ�棬\n%d���㽶��\n%d�����ӡ�\n�ܼۣ�%.2lfԪ��\n\n�տ�%.2lfԪ��Ӧ�ң�%.2lfԪ��\nEND\n\n\n",applePrice,pearPrice,bananaPrice,orangePrice,appleWeight,pearWeight,bananaWeight,orangeWeight,totalPrice,payments,giveChange);

		memset(changePrice, '\0', sizeof(changePrice));
	}
	

	return 0;
}


float f(float x) {
	//�������뱣����λС��
	int t;
	float f;
	x = x * 1000;
	t = (x + 5) / 10;
	f = (float)t / 100;
	return f;
}