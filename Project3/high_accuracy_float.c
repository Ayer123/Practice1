#include<stdio.h>
int main() {
	//初始化变量和数组
	int a = 0, b = 0,i=0;
	int res[201];
	for (int j = 0; j < 201; j++) {
		res[j] = 1;
	}
	scanf_s("%d/%d", &a, &b);
	//输入的结果必小于0,加个0.让它更像小数
	printf("0.");
	//输入后才能保存变量用于最终文字打印
	int a1 = a, b1 = b;
	//模仿手动除法,利用整数特性舍弃小数点后的数
	while (a != 0) {
		//因为输入限定a<b,开始直接a*10/b结果是第一位小数
		res[i] = a * 10 / b;
		printf("%d", res[i]);
		i++;
		//最多只输出小数点后200位
		if (i > 199) {
			break;
		}
		//然后用a*10/b的余数继续计算求得余下小数,若是提前求完,则余数为0,循环条件不满足,结束循环 
		a = a * 10 % b;
	}
	return 0;
}