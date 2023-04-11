#include<stdio.h>
#define n 4
//define定义n阶行列式

int main()
{
//创造n阶行列式 
	static int a[n+1][n+1];
	int m=n+1;
	printf("创建一个%d阶的行列式:\n",n);
	
	
//用户输入行列式元素
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<m;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}


//显示行列式a 
	printf("\na=\n");
	for(int i=1;i<m;i++)
	{
		printf("|");
		for(int j=1;j<m;j++)
		{
			printf("%d",a[i][j]);
			if(j!=n)
			{
				printf(" ");
			}

		}
		printf("|\n");
	}
	
	
//运算
	int sum1=0,sum2=0;
	int i=1,j=1,j1=0;
	int s1=1,s2=1;
	
	
//主对角线sum1
	j1=0;
	for(int a1=1;a1<m;a1++)
	{
		s1=1; 
		i=1,j=1;//主对角线初始位置a[1][1] 
		j+=j1;//去往下一条对角线 
		for(int a2=1;a2<m;a2++)
		{
			if(j==m)
			{
				j=1;
			}
//			printf("a[%d][%d]=%d\n",i,j,a[i][j]);
			s1*=a[i][j];//s1为一条主对角线上元素的累乘
			j++;
			i++;
			
		}
//		printf("s1=%d\n",s1);
		j1++;
		sum1+=s1;//sum1为一条主对角线上的积
//		printf("sum1=%d\n",sum1);
	}
	printf("主对角线：sum1=%d\n",sum1);
	
	
//副对角线sum2
	j1=0;
	for(int a1=1;a1<m;a1++)
	{
		s2=1;
		i=n,j=1;//副对角线初始位置a[n][1] 
		j+=j1;//去往下一条对角线 
		for(int a2=1;a2<m;a2++)
		{
			if(j==m)
			{
				j=1;
			}
//			printf("a[%d][%d]=%d\n",i,j,a[i][j]);
			s2*=a[i][j];//s2为一条副对角线上元素的累乘 
			j++;
			i--;
		}
//		printf("s2=%d\n",s2);
		j1++;
		sum2+=s2;//sum2为一条副对角线上的积
//		printf("sum2=%d\n",sum2);
	}
	printf("副对角线：sum2=%d\n",sum2);
	
//结果
	//行列式a=(主对角线-副对角线)*n
	printf("行列式a的值：a=sum1-sum2=%d",sum1-sum2);
}

