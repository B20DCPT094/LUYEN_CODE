#include<stdio.h>
int main(){
	int m,n;
	scanf("%d %d", &m, &n);
	int x=(4*m-n)/2;
	int y=(n-2*m)/2;
	if(2*x==4*m-n && x>=0 && y>=0){
		printf("%d %d", x, y);
	}
	else{
		printf("-1");
	}
}