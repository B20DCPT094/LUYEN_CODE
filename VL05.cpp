#include <stdio.h>
int main () {
    int n;
    scanf ("%d",&n);
    int odd=0;
    int even=0;
    for (int i = 1;i<=3*n+1;i++) {
        if (i%2!=0){
            odd += i;
        } if (i%2==0){
            even-=i;
        }
    }
    printf ("%d", odd + even);
}