#include <stdio.h>
#include <string.h>
int main()
{
	char n[100],a=1;
	scanf("%s",n);
	int t=strlen(n);
	for(int i=0;i<t;i++){
		if(n[i]!=n[t-i-1]){
			a=0;
			break;
		}

	}
	if(a==1) printf("YES");
	else printf("NO");


}
