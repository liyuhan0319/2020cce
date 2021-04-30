#include <stdio.h>
int main()
{
	int a,b,m,n;
	printf("Enter two integers: \n");
	scanf("%d%d",&a,&b);
	m=a;
	n=b;

	while(a>0 && b>0){
		if(a>b) a%=b;
		else b%=a;
	}

	if (a==0) printf("The greatest common divisor of %d and %d is %d\n",m,n,b);
	else  printf("The greatest common divisor of %d and %d is %d\n",m,n,a);
}
