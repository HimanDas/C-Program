#include<stdio.h>
#include<math.h>
int main()
{
	
	int a,b,c,d;
	printf("Enter the Numbers\n");
	scanf("%d\n%d",&a,&b);
	c=sqrt(a);
	d=pow(a,b);
	printf("%d\n%d\n",c,d);
	printf("%d\n",a+b);
	printf("%d\n",a-b);
	printf("%d\n",a*b);
	printf("%d\n",a/b);
	return 0;
	
}
