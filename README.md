# 2020cce

## 第一題 找零錢 2/26 實
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,n%50/5,n%50%5);
}
```
 
## 第二題 因數個數 2/26 實
```c
#include <stdio.h>
int main()
{
	int n,a=0;
	scanf("%d",&n);
	
	for (int i=1;i<=n;i++){
		if(n%i==0)a++;
	 }
	printf("%d\n",a);
}
```

## 第三題 找倍數 2/26 實
```c
#include <stdio.h>
int main()
{
	int a[10],n=0;
	for (int i=0;i<10;i++){
	scanf("%d",&a[i]);
	if(a[i]%3==0) n++;
	}
	printf("%d\n",n);
}
```

## 第四題 整數轉換為等級 2/26 實
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90) printf("A\n");
	else if(n<90 && n>=80) printf("B\n");
	else if(n<80 && n>60) printf("C\n");
	else printf("F\n");
}
```

## 第五題 分式化簡  2/26 實
```c
#include <stdio.h>
int main()
{
	int a,b,c=0,i;
	scanf("%d%d",&a,&b);
	for (i=1;i<=a;i++){
		if(a%i==0 && b%i==0) c=i; 
	}
	printf("%d %d\n",a/c,b/c);
}
```

## 第一題 利用 int *p 來改變 n1變數的值 3/5 正
```c
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p = &n1;
    *p = 200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
}
```

## 第二題 利用 int *p2 來改變 n3 變數的值 3/5 正
```c
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p = &n1;
    *p = 200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);

    int *p2 =&n3;
    *p = 300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
}
```

## 第三題 利用 p2=p 讓口袋的address位址換了一張, 所以 *p2=400 就會換到其他地方送400元 3/5 正
```c
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p = &n[0];
    *p = 200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    int *p2 =&n[2];
    *p = 300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    p2=p;
    *p2 = 400;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
}
```
## 第一題 讀入整數反序列印 3/5 實
```c
#include <stdio.h>
int a[1000];
int main()
{
	int N=0;
	for (int i=0;i<1000;i++){
		scanf ("%d",&a[i]);
		if(a[i] == 0){
			N=i;
			break;
		}
	}
	for (int i=N-1;i>=0;i--){
		printf("%d ",a[i]);
	}
	printf("\n");
}
```


## 第二題 A的B次方函數 3/5 實
```c
#include <stdio.h>
int MYPOWER(int a,int b)
{
	int n=1;
	for(int i=b;i>0;i--){
		n*=a;
		}
		return n;
}

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```


## 第三題 漸增數列相加 3/5 實
```c
#include <stdio.h>
int main()
{
	int n,a=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		a+=i*(i-1);
	}
	printf("%d\n",a);
}
```

## 第四題 判別正方形 3/5 實
```c
include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a==b) printf("Enter two numbers:  It is a square ");
	else printf("Enter two numbers:  It is not a square ");
}
```

## 第五題 2進位轉10進位 3/5 實
```c
#include <stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	a=n%10+((n%100)/10)*2+((n%1000)/100)*4+(n/1000*8);
	printf("%d\n",a);
}
```

## 第六題 均標與前標計算  3/5 實
```c
#include <stdio.h>
int main()
{
	int n,a[100];
	float b,c,t=0,d=0,e=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		t+=a[i];
	}
	b=t/n;
	for(int i=0;i<n;i++){
		if(a[i]>=b ){
		d++;
		e+=a[i];
		}
	}
	
	c=e/d;
	printf("均標:%.1f\n",b);
	printf("前標:%.1f\n",c);
}

```

## 第三題 把 int * p = &a[2] ; 的 p 心中的值(心裡放住址的小紙條) 印出來給你看 printf("%d\n", p);  3/12 正
```c
#include <stdio.h>
int a[5]={0,10,20,30,40,50};
void printALL(){
    for (int i=0;i<5;i++) printf("%d ",a[i]);
    printf("\n");
}
int main()
{
            printALL();
    int  *p=&a[2];
    *p=222;
            printALL();
            printf("p:%d\n",p);
    p=p+2;
    *p=666;
            printALL();
            printf("p:%d\n",p);
    p--;
    *p=555;
            printALL();
            printf("p:%d\n",p);
}

```

## 第四題 malloc() 3/12 正
```c
#include <stdio.h>
#include <stdlib.h>

int a[10];
int main()
{
    int b[10];
    int *p = (int*) malloc ( sizeof (int)*10 );
    return 0;
}
```

## 第一題 計算陣列的平方值 3/12 實
```c
#include <stdio.h>
int main()
{
	int N,a[10];
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");
}
```

## 第二題 大小寫轉換 3/12 實
```c
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
```


## 第三題 計算幾週與幾天 3/12 實
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d %d\n",n/7,n%7);
}
```

## 第四題 計程車資計算 3/12 實
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<2000) printf("100\n");
	else if(n>2000 && n/500==0)printf("%d\n",(n-2000)/500*5+100);
	else printf("%d\n",((n-2000)/500+1)*5+100);
}
```

## 第五題 兩數間可被5整除的整數 3/12 實
```c
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
```

## 第六題 整數間最大距離 3/12 實
```c
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	if( a>b && a>c){
		if(b>c) printf("%d\n",a-c);
		else printf("%d\n",a-b);
	}
	
	if( b>a && b>c){
		if(a>c) printf("%d\n",b-c);
		else printf("%d\n",b-a);
	}
	
	if( c>b && c>a){
		if(a>b) printf("%d\n",c-b);
		else printf("%d\n",c-a);
	}
	}
```

## 第一題 除惡務盡 3/19 實
```c
#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",&a);
	
	int i=0;
	while (a[i] != '\0')
	{
		if(a[i] != '2') printf("%c",a[i]);
		i++;
	}
	printf("\n");
} 
```

## 第二題 擲骰統計 3/19 實
```c
#include <stdio.h>
int main()
{
	char a[100];
	char count[7] = {0};
	scanf("%s",&a);
	
	int i=0;
	while(a[i] != '\0')
	{
		count[a[i]-'0']++;
		i++;
	}
	for(int i=1;i<=6;i++){
		printf("%d:%d\n",i,count[i]);
	}
}
```

## 第三題 函數找整數的最大數字 3/19 實
```c
#include<iostream>
using namespace std;
int max_digit(int n){
	int M;
	scanf("%s",&n);
	M=n%10;
	while(n>0){
		if(n%10>M) M=n%10;
		n/=10;
	}
	return M;
}
int main(){
  int n;cin>>n;
  cout<<"["<<max_digit(n)<<"]";
  return 0;
}
```

## 第四題 星星等腰三角 3/19 實
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
	for(int j=n-i;j>0;j--){
		printf(" ");
	}
	for(int k=1;k<=2*i-1;k++){
		printf("*");
	}
	printf("\n");
	}
}
```

## 第五題 分開整數的每個數字 3/19 實
```c
#include <stdio.h>
int main()
{
	char a[5];
	scanf("%s",&a);
	for(int i=0;i<5;i++){
		printf("%c",a[i]);
		if(i!=4) printf("   ");
	}
}
```

## 第六題 字元判別3/19 實
```c
#include <stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if(a>='A' && a<='Z') printf("U");
	else if(a>='a' && a<='z') printf("L");
	else if(a>='0' && a<='9') printf("D");
	else printf("O");
}
```

## 第七題 數字之首 3/19 實
```c
#include <stdio.h>
int main()
{
	char N[100];
	scanf("%s",&N);
	printf("%c",N[0]);
}
```

## 第八題 輸出從0到N的偶數 3/19 實
```c
#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=1;i<=N;i++){
		if(i%2==0)printf("%d ",i);
	}
}
```

## 第一題 請了解, 字串後面會放 '\0' 這個特殊符號, 表字串結尾 3/26 正
```c
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line);
    printf("%s\n",line2);
}

```

## 第二題 因為是「雙引號」的字串, 所以也是會準備正確的格子數目給你, 並附上字串結尾 3/26 正
```c
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line);
    printf("%s\n",line2);

    char line3[]="majority";
    printf("%s\n",line3);
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("line4: ==%s==\n",line4);
}
```

## 第三題  3/26 正
```c
#include <stdio.h>
int main()
{
    char line[5][10]={"decline","proper","majority","bullet","shop"};
    for(int i=0;i<5;i++){
        printf("%s\n",line[i]);
    }
}
```
 
## 第四題  '\0' 與 0 3/26 正
```c
#include <stdio.h>
int main()
{
    printf("%d",'\0');
}
```

## 第五題 strcpy() 及 strcmp() 字串比大小 3/26 正
```c
#include <stdio.h>
#include <string.h>
int main()
{
    char line[10]="majority";
    char line2[10]="ask";
    if(strcmp(line,line2)>0){
        printf("left 大\n");
    }else{
        printf("right 大\n");
    }
}
```

## 第六題 字串排序 3/26 正
```c
#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%s",line[i]);
	}
	char temp[10];
	for(int i=0;i<N;i++){
	for(int j=i+1;j<N;j++){
		if(strcmp(line[i],line[j])>0){
			strcpy(temp,line[i]);
			strcpy(line[i],line[j]);
			strcpy(line[j],temp);
		}	
	}
}
	for(int i=0;i<N;i++){
		printf("%s\n",line[i]);
		}
	}
```

## 第一題 反序數字 實 3/26
```c
#include <stdio.h>
int main()
{
	int n,a=0,b;
	scanf("%d",&n);
	b=n;
	while(n>=1){
		a=a*10+n%10;
		n/=10;
	}
	printf("%d+%d=%d\n",b,a,b+a);
}
```

## 第二題 絕對值函數 實 3/26
```c
#include <stdio.h>
int f(int n)
{
	if(n<0) n-=2*n;
	return n;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
```

## 第三題 N數之和 實 3/26
```c
#include <stdio.h>
int main()
{
	int n,a[100],b=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		b+=a[i];
	}
	printf("%d\n",b);
}
```

## 第四題 三數極大 實 3/26
```c
#include <stdio.h>
int main()
{
	int a[3],M=1;
	for(int i=0;i<3;i++){
		scanf("%d",&a[i]);
		if(a[i]>M) M=a[i];
	}
	printf("%d\n",M);
}
```

## 第五題 計算商數 實 3/26
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",a/b);
}
```

## 第一題 字串排序 正 4/9
```c
#include <stdio.h>
#include <string.h>
char line[100][10];

int main()
{
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
	scanf("%s",line[i]);
	}

	char temp [10];
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
		if(strcmp(line[i],line[j])>0){
			strcpy(temp,line[i]);
			strcpy(line[i],line[j]);
			strcpy(line[j],temp);
		
		}
		}
	}
	for (int i=0;i<n;i++){
		printf("%s\n",line[i]);
	}

}
```

## 第二題 10420 List of Conquests 正 4/9
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char line[100][10];
char other[100];

int compare (const void * p1,const void * p2){
	char * s1 = (char*) p1;
	char * s2 = (char*) p2;
	return strcmp (s1,s2);
}
int main()
{
	int ans=1;
	int n;
	scanf("%d",&n);
	
	for (int i=0;i<n;i++){
		scanf("%s",line[i]);
		gets (other);
	}

	qsort(line,n,10,compare);
	
	for (int i=0;i<n;i++){
		if(strcmp(line[i],line[i+1])==0){
			ans++;
		}
		else{
		printf("%s %d\n",line[i],ans);
		ans=1;
	}
}
}
```

## 第一題 迴文判斷 實 4/9
```c
#include <stdio.h>
int main()
{
	char n[4];
	int a=0;
	scanf("%s",n);
	for (int i=0;i<2;i++){
		if(n[i]==n[3-i]) a=1;
		else {
			a=0;
			break;
		}
	}
	if(a==1) printf("YES\n");
	else printf("NO\n");
}
```

## 第二題 函數反序排列數字 實 4/9
```c
#include <stdio.h>
int f(int n)
{
	int a=0;
	while(n>0){
		a=a*10+n%10;
		n/=10;
	}
	return a;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",f(n));
}
```

## 第三題 陣列找出現次數 實 4/9
```c
#include <stdio.h>
int main()
{
	int n[10],a=0,b;
	for (int i=0;i<10;i++){
		scanf("%d",&n[i]);
		if (n[i]==0) break;
	}
	scanf("%d",&b);
	for (int i=0;i<10;i++){
		if(n[i]==b) a++;
	}
	printf("%d\n",a);
}
```

## 第四題 判斷大小 實 4/9
```c
#include <stdio.h>
int f(int a,int b)
{
	scanf("%d%d",&a,&b);
	if (a<b) return -1;
	else if (a==b)return 0;
	else return 1;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d",f(a,b));
    return 0;
}
```

## 第五題 計算一列整數的總和實 4/9
```c
#include <stdio.h>
int main()
{
	int n=0,a=0;
	while (n!=999){
	a+=n;
	printf("Enter an integer ( 999 to end ): \n");
	scanf("%d",&n);
	
	}
	printf("The total is: %d",a);
}
```

## 第六題 計算餘數 實 4/9
```c
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	
	printf("%d",a%b);
}
```

## 第七題 整數轉換等級實 4/9
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if (a>=90) printf("A");
	else if (a<90 && a>=80) printf("B");
	else if (a<80 && a>=70) printf("C");
	else if (a<70 && a>=60) printf("D");
	else printf("F");
}
```

## 第八題 計程車資計算 實 4/9
```c
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if (a<1500) printf("100");
	else if((a-1500)%250==0) printf("%d",100+(a-1500)/250*5);
	else if((a-1500)%250!=0) printf("%d",100+(a-1500)/250*5+5);
}
```

## 第九題 找零錢 實 4/9
```c
#include <stdio.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	
	b=a/50;
	c=a%50/10;
	d=a%50%10/5;
	e=a-50*(a/50)-10*(a%50/10)-5*(a%50%10/5);
	
	printf("%d=50*%d+10*%d+5*%d+1*%d",a,b,c,d,e);
}
```

## 第一題 List of Conquests 
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char name[200][80];

int compare (const void *p1,const void *p2){
	return strcmp ((char*)p1,(char*)p2);
}

char trash[80];

int main(){
	int n;
	scanf("%d",&n);
	
	for (int i=0;i<n;i++){
		scanf("%s",name[i]);
		gets (trash);	
	}
	
	qsort (name ,n,80,compare);

	int ans=1;
	printf("%s ",name[0]);
	for (int i=0;i<n-1;i++){
	if (strcmp(name[i],name[i+1])!=0){
		printf("%d\n",ans);
		printf("%s ",name[i+1]);
		ans=1;
	}
	else ans++;
}
	printf("%d\n",ans);
}

```

## 第二題 Hardwood species (未完成版)
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char tree[1000000][32];
int compare (const void *p1,const void *p2){
	return strcmp((char*)p1,(char*)p2);
}

int main()
{
	int T;
	scanf("%d\n\n",&T);

	int N=0;
	for (int i=0;  ;i++){
		char* now=gets(tree[i]);
		if(now==NULL){
		N=i;
		break;
		}
	if(strcmp(tree[i],"")==0){
		N=i;
		break;
	}
	}

	qsort(tree,N,32,compare);

	printf("%s ",tree[0]);
	int ans=1;

	for(int i=0;i<N-1;i++){
		if(strcmp(tree[i],tree[i+1])!=0){

			printf("%d\n",ans);
			printf("%s ",tree[i+1]);
			ans=1;
	}
	else ans++;
	}
	printf("%d\n",ans);
}

```

## 第一題 Hardwood species 4/30 正
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char line[1000];
char tree[1000000][32];
int compare(const void *p1,const void*p2){
	return strcmp((char*)p1,(char*)p2);
}

int main()
{
	int T;
	scanf("%d\n\n",&T);

	for(int t=0;t<T;t++){
		int N=0;
		while(gets(line)!=NULL){
			if(strcmp(line,"")==0) break;

			strcpy(tree[N],line);
			N++;
		}
		//printf("%d\n",N);

		qsort(tree,N,32,compare);

		if(t>0) printf("\n");
		int ans=1;
		printf("%s ",tree[0]);

		for(int i=0;i<N-1;i++){
			if(strcmp(tree[i],tree[i+1])==0){
				ans++;
			}else{
				printf("%.4f\n",100*ans/(float)N);
				ans=1;
				printf("%s ",tree[i+1]);
			}
		}
		printf("%.4f\n",100*ans/(float)N);
	}
}
```

## 第一題 最大公因數gcd 4/30 實
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n==4||n==6|n==9|n==11) printf("30");
	else if (n==2) printf("28");
	else printf("31");

}
```

## 第二題 字串長度 4/30 實
```c
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
```

## 第三題 函數判斷質數4/30 實
```c
#include <iostream>
using namespace std;

int prime(int n)
{
	int a=0,b=1;
	for(int i=1;i<=n;i++){
		if(n%i==0) a++;
		
	}
	if(a==2) b=1;
	else b=0;
	return b;

}

int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
/* 上方 C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
```

## 第四題 判斷迴文 4/30 實
```c
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
```

## 第五題 計算餘數及列印 4/30 實
```c
#include <stdio.h>
int main()
{
	int x,y;
	printf("Enter two numbers:");
	scanf("%d%d",&x,&y);
	printf(" The remainder is %d\n",x%y);

}
```

## 第六題 判別正方形 4/30 實
```c
#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	if(a==b) printf(" It is a square ");
	else printf(" It is not a square ");
}
```

## 第七題 將一連串整數相乘 4/30 實
```c
#include <stdio.h>
int main()
{
	int l[100],n,a=1;
	printf("Enter the number of values to be processed: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter a value: ");
		scanf("%d",&l[i]);
		a*=l[i];
	}
	printf("Product of the %d values is ",n);
	printf("%d",a);
}
```

## 第八題 平年月份的天數 4/30 實
```c
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if (n==4||n==6|n==9|n==11) printf("30");
	else if (n==2) printf("28");
	else printf("31");
}
```

## 第題 
```c
#include <stdio.h>
#include <stdlib.h>
int a[10]={4,8,3,7,5,2,9,1,6,10};

int compare(const void*p1,const void*p2){

    int d1=*(int*)p1;
    int d2=*(int*)p2;

    if(d1>d2) return 1;
    if(d1==d2)return 0;
    if(d1<d2) return -1;
}
int main()
{
    qsort(a,10,sizeof(int),compare);
    for(int i=0;i<10;i++){
            printf("%d ",a[i]);
    }
}
```

## 第題 
```c

```

## 第題 
```c

```

## 第題 
```c

```


## 第題 
```c

```


## 第題 
```c

```


## 第題 
```c

```

