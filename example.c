#include <stdio.h>

int test(int a){
    printf("%d\n", a);
    return a;
}
int b = 1 + 2;

int main(){
   int a = 2;
   int c = a + 3 - 1;
   scanf("%d %d", &a, &b);
   if(5){
        c = 1;
        c = c + 1;
   }
   else
   {
        c = -2;
   }
   printf("%.2f", test(b + c + 3));
   return 0;
}