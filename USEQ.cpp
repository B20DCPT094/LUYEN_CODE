#include <stdio.h>
#define ll long long 

int n;

int main(){   
    scanf("%d", &n);

    ll res = 0, x;
    while (n--)
        {
            scanf("%lld", &x);

            res ^= x;
        }
    
    printf("%lld", res);

    return 0;
}