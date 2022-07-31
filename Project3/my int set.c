#include<stdio.h>
int main() {
	int a = 0;
	int sum = 0;
	scanf_s("%d",&a);
	int a1 = a, a2 = a, a3 = a;
	for (int cnt = 0; cnt < 18; cnt++) {
		for (; a1 < a + 4; a1++) {
			if (a1 != a2 && a1 != a3) {
				sum += a1 * 100;
			}
			for (; a2 < a + 4; a2++) {
				if (a2 != a1 && a2 != a3) {
					sum += a2 * 10;
				}
				for (; a3 < a + 4; a3++) {
					if (a3 != a1 && a3 != a2) {
						sum += a3;
						printf("%d", sum);
					}
				}
			}
		}
	}
	return 0;
}