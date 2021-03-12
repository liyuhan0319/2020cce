#include <stdio.h>
int main()
{
	int m,n,a=0;
	scanf("%d%d",&m,&n);
	if(m>n){
		a=n;
		n=m;
		m=a;
	}
		for (int i=m;i<=n;i++){
		if(i%5==0) printf("%d\n",i);
		}

}
