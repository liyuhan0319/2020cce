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

## 第一題 老師示範簡單的字母陣列, 很多字母的意思, 又叫作字串 char line[10]="decline"; char line2[10]={'p','r','o','p','e','r','\0'}; 然後印出來。請了解, 字串後面會放 '\0' 這個特殊符號, 表字串結尾 3/26 正
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

## 第二題 老師示範另外一種字串宣告的方法, 沒有寫它有多少格 char line3[] = "majority"; 因為是「雙引號」的字串, 所以也是會準備正確的格子數目給你, 並附上字串結尾。不過下一個就有問題了 char line4[] = {'m','a','j','o','r','i','t','y'}; 沒有把字串結尾準備好, 就會壞掉哦! 3/26 正
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

## 第題 
```c

```
