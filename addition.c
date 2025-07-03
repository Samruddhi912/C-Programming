#include<stdio.h>

int Add(int num1,int num2){
    int Res=num1+num2;
    return Res;
}

int main(){
    int a=0;
    int b=0;
    int ans=0;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    ans=Add(a,b);
    printf("Addition is: %d",ans);



    return 0;
}