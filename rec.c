#include <stdio.h>


int abc(char k){
    if (k <= 'z'){
        return k + abc(k + 1);
    }
    else{
        return 0;
    }
}


int main(void){
    int result = abc('y');
    printf("%d\n", result);
    return 0;
}