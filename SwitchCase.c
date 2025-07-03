#include<stdio.h>
#include<stdbool.h>

int main(){
    int num,choice=0;
    printf("Menu:\n");
    printf("1. Check even or odd\n");
    printf("2. Find factors\n");
    printf("3. Check prime\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter one number!");
    scanf("%d",&num);
    switch(choice){
        case 1:
        if(num%2==0){
            printf("%d is an even number",num);
        }
        else{
            printf("%d is an odd number",num);
        }
        break;
        case 2:
        for (int i=1;i<=num;i++){
                if(num%i==0){
                    printf("Factor are: %d\n",i);
                }
            }
        
        break;
        case 3:
        {int isPrime=1;
        for(int j=2;j<num;j++){
            
            if(num%j==0){
                isPrime=0;
                break;
            }
        }
            if(isPrime){
                printf("%d is prime number",num);
            }
            else{
                printf("%d is not prime number",num);
            }
        }
        break;
        default:
        printf("Wrong choice");
    }


    return 0;
}