#include <stdio.h>
#include <math.h>

void CalandPrint(double a){
   a = 2 * (1 - 1 / (a + 1));
   printf("%.8lf\n", a);
}

int main(){
   int n;
   double Num;
   scanf("%d", &n);
   for (int i = 1; i <= n; i++){
      scanf("%lf", &Num);
      CalandPrint(Num);
   }
}