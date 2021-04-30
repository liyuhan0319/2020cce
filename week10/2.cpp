#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	scanf("%s%s",&a,&b);
	if(strlen(a)>strlen(b)) printf("1");
	else if(strlen(a)<strlen(b)) printf("-1");
	else{
		if(strcmp(a,b)>0) printf("1");
		else printf("0");
	}

}
