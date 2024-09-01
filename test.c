#include <stdio.h>

float return_avg(int num[]){
    float sum = 0;
    int i;
    int length = (int) (sizeof(num) / sizeof(num[0]));
    for(i = 0; i < length; i++){
        sum = sum + num[i];
    }
    float average = sum / i;
    return average;
}

int main(void){

    int num1[] = {11, 12, 13, 14};
    int num2[]= {10, 9, 8};

    printf("average first array is: %f\n", return_avg(num1));
    printf("average second array is: %f\n", return_avg(num2));
    return 0;
}
