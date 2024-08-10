#include<stdio.h>

int main(){
    int x, m;
    int est=0;

   scanf("%d %d", &x, &m);

   if (m >= 1 && m <= 100000){
       est = x + (x % m);
    }

   if (est % m != 0){
        printf("NONSTOP\n");

   }else{printf ("STOP\n");}}


