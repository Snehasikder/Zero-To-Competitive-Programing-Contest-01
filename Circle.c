#include<stdio.h>
#define pi 3.14159265
int main(){
  int r;
  scanf("%d",&r);
  printf("%.6lf %.6lf\n", pi*r*r, 2*pi*r);
  return 0;
}
