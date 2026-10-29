//week08-1_old.cpp SOIT108_Advance_002B
//想要把三的數字(排最大) +1
#include <stdio.h>	//用大一方式解

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a<b){	//倆倆比較， 大的放左邊
		int temp = a;
		a =b;
		b = temp;
	}
	if(b<c){	//大小不對 就交換
		int temp = b;
		b = c;
		c = temp;
	}
	if(a<b){	//大小不對 就交換
		int temp = a;
		a =b;
		b = temp;
	}
	printf("%d", a*100+b*10+c+1);
}
