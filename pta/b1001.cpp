#include <cstdio>

int main(){
	int n,step=0;
	scanf("%d",&n);
	while(n != 1){
		if(n%2 != 0) n=(3*n+1)/2;
		else n=n/2;
		step++;
		printf("n=%d,step=%d\n",n,step);
	}
	printf("step=%d\n",step);
	return 0;
}