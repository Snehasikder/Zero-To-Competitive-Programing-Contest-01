#include<stdio.h>
int main(){
    // A -x*B <=0
    // x*B>=A
    // x>=A/B
    long long a,b;
    scanf("%lld %lld",&a, &b);
    // Formula
    long long x=(a+b-1)/b;
    printf("%lld\n",x);
    return 0;
}
