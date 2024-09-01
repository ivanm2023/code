#include <stdio.h>

void printn(int number){
        if (number == 0){
        return;
    }
    printn(number/10);
    printf("%d", number % 10);
}

int main(){

    int number = 1234;

    printn(number);

    return 0;
}