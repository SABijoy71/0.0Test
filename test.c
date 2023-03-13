#include <stdio.h>
#include <stdbool.h> // this header file is for boolean value like true and false //
#include <math.h>

bool isPrime(int number){
    int i,j;
    if(number < 2){
        return false;
    }
    if(number == 2){
        return true;
    }
    if(number % 2 == 0){
        return false;
    }
    int root = sqrt(number);
    for(i = 3; i <= root; i += 2){
        if(number % i == 0){
            return false;
        }
    }
    return true;
}

int main(void){

    int number;
    
    while(true){
        printf("Enter a number (0 to exit): ");
        scanf("%d", &number);
        if(number == 0){
            break;
        }
        if(true == isPrime(number)){
            printf("%d is prime number\n", number);
        }else{
            printf("%d is not a prime number\n", number);
        }
    }

    return 0;
}