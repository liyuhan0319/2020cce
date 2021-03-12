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
