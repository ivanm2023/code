#include <stdio.h>
#include <unistd.h>

int main(void){

    for (char l = 'a'; l <= 'z'; l++)
    {
        printf("%c", l);
    }
    write(1, "\n", 1);

    return 0;
}