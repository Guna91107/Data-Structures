#include<stdio.h>
int main(){
    int n,factorial=1,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        factorial*=i;
    }
    printf("The factorial of %d is %d\n",n,factorial);

}
