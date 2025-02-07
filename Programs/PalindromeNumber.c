#include <stdio.h>
void main() {
    int n,r,sum=0,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0) {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(sum==temp)
        printf("Is a Palindrome Number");
    else
        printf("Is not a Palindrome Number");
    return 0;
}