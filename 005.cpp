#include<stdio.h>
#define n 4
//define����n������ʽ

int main()
{
//����n������ʽ 
	static int a[n+1][n+1];
	int m=n+1;
	printf("����һ��%d�׵�����ʽ:\n",n);
	
	
//�û���������ʽԪ��
	for(int i=1;i<m;i++)
	{
		for(int j=1;j<m;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}


//��ʾ����ʽa 
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
	
	
//����
	int sum1=0,sum2=0;
	int i=1,j=1,j1=0;
	int s1=1,s2=1;
	
	
//���Խ���sum1
	j1=0;
	for(int a1=1;a1<m;a1++)
	{
		s1=1; 
		i=1,j=1;//���Խ��߳�ʼλ��a[1][1] 
		j+=j1;//ȥ����һ���Խ��� 
		for(int a2=1;a2<m;a2++)
		{
			if(j==m)
			{
				j=1;
			}
//			printf("a[%d][%d]=%d\n",i,j,a[i][j]);
			s1*=a[i][j];//s1Ϊһ�����Խ�����Ԫ�ص��۳�
			j++;
			i++;
			
		}
//		printf("s1=%d\n",s1);
		j1++;
		sum1+=s1;//sum1Ϊһ�����Խ����ϵĻ�
//		printf("sum1=%d\n",sum1);
	}
	printf("���Խ��ߣ�sum1=%d\n",sum1);
	
	
//���Խ���sum2
	j1=0;
	for(int a1=1;a1<m;a1++)
	{
		s2=1;
		i=n,j=1;//���Խ��߳�ʼλ��a[n][1] 
		j+=j1;//ȥ����һ���Խ��� 
		for(int a2=1;a2<m;a2++)
		{
			if(j==m)
			{
				j=1;
			}
//			printf("a[%d][%d]=%d\n",i,j,a[i][j]);
			s2*=a[i][j];//s2Ϊһ�����Խ�����Ԫ�ص��۳� 
			j++;
			i--;
		}
//		printf("s2=%d\n",s2);
		j1++;
		sum2+=s2;//sum2Ϊһ�����Խ����ϵĻ�
//		printf("sum2=%d\n",sum2);
	}
	printf("���Խ��ߣ�sum2=%d\n",sum2);
	
//���
	//����ʽa=(���Խ���-���Խ���)*n
	printf("����ʽa��ֵ��a=sum1-sum2=%d",sum1-sum2);
}

