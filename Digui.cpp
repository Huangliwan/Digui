#include <stdio.h>
void Swap(int *x,int *y)
{
	int t=0;
	if(*x>*y)
	{
		t=*x;
		x=y;
		*y=t;
	}

}
void Digui(int *array,int n)
{
	int i,j;
	if(1==n)
	{
		return;
	}
	for(i=0;i<n;i++)
		for(j=0;j<n-i-1;j++)	//使用嵌套循环，不然在比较大小的时候只能比较一次
			Swap(&array[j],&array[j+1]);	//调用交换函数进行比较
	Digui(array,n-1);	//调用自己对下一个数进行比较
}

main()
{
	int array[5];
	int i;
	printf("这些数分别为");
	for(i=0;i<5;i++)
		scanf("%d",&array[i]);
	Digui(array,5);
	for(i=0;i<5;i++)
		printf("%2d",array[5]);
}
