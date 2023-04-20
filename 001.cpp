#include<stdio.h>
#define n 4
//define定义n阶行列式

int main()
{
//创造矩阵A
	static int A[2*n][2*n];
	static int a[2*n][2*n];
	printf("创建一个%d阶的方阵A:\n",n);
	int m=n+1;
	
	
//用户输入矩阵A元素
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<m;j++)
		{
			printf("A[%d][%d]=",i,j);
			scanf("%d",&A[i][j]);
		}
	}


//打印矩阵A 
	printf("\n矩阵A:\n");
	for(int i=1;i<m;i++)
	{
		printf("[");
		for(int j=1;j<m;j++)
		{
			printf("%d",A[i][j]);
			if(j!=n)
			{
				printf(" ");
			}

		}
		printf("]\n");
	}
	
	
//余子式 
	int q=1;
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<m;j++)
		{
			//创造矩阵a 
			for(int i1=1;i1<m;i1++)
			{
				for(int j1=1;j1<m;j1++)
				{
					a[i1][j1]=A[i1][j1];
				}
			}
		
		
			for(int i1=i;i1<m;i1++)
			{
				for(int j1=1;j1<m;j1++)
				{
					a[i1][j1]=A[i1+1][j1];
				}
			}
			
			for(int i1=1;i1<m;i1++)
			{
				for(int j1=j;j1<m;j1++)
				{
					a[i1][j1]=a[i1][j1+1];
				}
			}
			
			
			printf("\n矩阵a%d:\n",q);
			for(int i=1;i<n;i++)
			{
				printf("[");
				for(int j=1;j<n;j++)
				{
					printf("%d",a[i][j]);
					if(j!=n)
					{
						printf(" ");
					}
				}
				printf("]\n");
			}
			q++;
		}
	}


	return 0;
}


