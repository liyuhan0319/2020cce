#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<2000) printf("100\n");
	else if(n>2000 && n/500==0)printf("%d\n",(n-2000)/500*5+100);
	else printf("%d\n",((n-2000)/500+1)*5+100);

}
