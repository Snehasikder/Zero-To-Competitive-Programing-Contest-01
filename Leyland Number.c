#include<stdio.h>
int main(){
  int a,b;
  scanf("%d %d",&a, &b);
  printf("%d", (int) pow (a,b)+(int) pow (b,a));
  return 0;
}
