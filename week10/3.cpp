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
/* よ C++  main ㄧ计 单基 よ C  main ㄧ计
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
