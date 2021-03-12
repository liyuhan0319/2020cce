#include <stdio.h>
int main()
{
	char a[10];
	scanf("%s",&a);
	for(int i=0;i<10;i++){
		if(a[i]>='A' && a[i]<='Z') a[i]+=32;
		else if (a[i]>='a' && a[i]<='z') a[i]-=32;
	}
	printf("%s\n",a);
}

