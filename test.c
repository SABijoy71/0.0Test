#include <stdio.h>
#include <stdbool.h>

int isPrime(int number){
    int i,j;
    if(number < 2){
        return 0;
    }
    if(number == 2){
        return 1;
    }
    if(number % 2 == 0){
        return 0;
    }
    for(i = 3; i <= number/2; i += 2){
        if(number % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(void){

    int number;
    
    while(true){
        printf("Enter a number (0 to exit): ");
        scanf("%d", &number);
        if(number == 0){
            break;
        }
        if(1 == isPrime(number)){
            printf("%d is prime number\n", number);
        }else{
            printf("%d is not a prime number\n", number);
        }
    }

    return 0;
}