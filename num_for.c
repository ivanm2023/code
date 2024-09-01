#include <stdio.h>


int main(void){
    int i = 0;
    int r[4];

    for (int number = 1234; number > 0; number = number/ 10)
    {
        r[i] = number % 10;
        i++;
        
        // printf("%d", number % 10);
    }
    
    int lenght = sizeof(r) / sizeof(int);
    for (int j = lenght - 1; j >=0; j--)
    {
        printf("%d", r[j]);
    }


    return 0;
}