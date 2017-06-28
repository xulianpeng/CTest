#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	
	/*声明函数 */
	//四个互不相同的数字 1 2 3 4, 可以组成多少个不相同的3位数 ，且这个3位数 每一位上都不相同
    int question1();

    //一个整数 其加上100后是一个数的平方数 ，再加上168后 又是一个完全平方数 ，求这个数是多少？
    int question2();

    //冒泡排序
    int maoPaoSort();

    //输出乘法口诀
    
    int printChengFaKouJue();

    /* 调用函数 ---调用函数前 必须先声明函数 */
    question1();
    question2();
    maoPaoSort();
    printChengFaKouJue();

	return 0;
}

int question1(){

	for (int i = 1; i <= 4; ++i)
	{
		for (int j = 1; j <= 4; ++j)
		{
			for (int k = 1; k <= 4; ++k)
			{
				
				if (i != j && j != k  && i!= k)
				{
					
					printf("%d%d%d\n",i,j,k );
				}
			}

		}
	}


return 0;
}

int question2(){


long int i ,x,y,z;

for (int i = 0; i < 100000; ++i)
{
	x = sqrt(i + 100);
	y = sqrt(i + 268);

	if (x * x == i + 100 && y * y == i + 268)
	{
		printf("%d\n",i);
	}
}
	return 0;
}

int maoPaoSort(){

	//需要先补充 c语言 关于数组的 相关知识点
	//升序排序  从小到大 排序 
	//
	
	int arr[10] = {9,4,5,3,2,7,8,1,0,6};

	for (int i = 0; i < 10 ; ++i)
	{
		
		for (int j = 0; j < 9; ++j)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];

				arr[j] = arr[j+1];

				arr[j+1] = temp;
			}
		}
			
		
	}

for (int i = 0; i < 10; ++i)
{
	printf("%d\n", arr[i]);
}

return 0;
}

int printChengFaKouJue(){


for (int i = 1; i <= 9; ++i)
{
	for (int j = i; j <= 9; ++j)
	{
		printf("%d * %d = %d\n",i,j, i * j );
	}
}

return 0;

}

