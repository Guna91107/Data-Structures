#include<stdio.h>
int fib(int n){
    if(n==0){
        return 0;
    }
    else if(n==1) {
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main (){
    int a=5;
    for(int i=0;i<a;i++){
        printf("%d\t",fib(i));
    }
}