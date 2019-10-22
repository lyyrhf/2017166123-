#include "stdio.h"
using namespace std;
int main(int argc, char *argv[]) {
	int i, n, t;
	printf("  2");//单独处理2
	for (t = 1, i = 3; i < 20000; i += 2) {//遍历3至100的奇数
		for (n = 3; n*n <= i; n += 2)//考察i是否为素数
			if (i%n == 0)
				break;//若有1和自身以外的因子则在n*n<=i时跳出
		if (i < n*n)//若n*n>i则i是素数
			printf(++t % 5 ? "%3d   " : "%3d\n", i);//++t%5控制每行5个数
	}
	if (t % 5)
		printf("\n");
	return 0;
}


最费时的函数是for循环的遍历，但是不知道怎么改进。。。。
