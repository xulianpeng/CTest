#include <stdio.h>
int main(int argc, char const *argv[])
{
	

	//编写一个程序 输入3个数 求最大值
	
	int a, b, c;
	int maxValue1;

    int obtainMaxFromThree(int a,int b,int c);

	scanf("%d,%d,%d",&a,&b,&c);

	a = 1,b = 5,c = 2;
	maxValue1 = obtainMaxFromThree(a,b,c);


printf("三者中的最大值为%d\n",maxValue1 );
	printf("Hello C World  Today I will learn C \n");

	return 0;
}

int obtainMaxFromThree(int a,int b,int c){

	int lastValue;

int obtainMaxFromTwo(int a,int b);
	lastValue = obtainMaxFromTwo(a,b);

	return obtainMaxFromTwo(lastValue,c);

}

int obtainMaxFromTwo(int a,int b){

	int lastTwo;

	if (a > b)
	{
		lastTwo = a;
	}else{
		lastTwo = b;
	}
return lastTwo;
}