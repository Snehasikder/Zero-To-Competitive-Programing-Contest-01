#include<stdio.h>
int main(){
    // A -x*B <=0
    // x*B>=A
    // x>=A/B
    Long Long a,b;
    scanf("%lld %lld",&a, &b);
    // Formula
    Long Long x=(a+b-1)/b;
    return 0;
}
