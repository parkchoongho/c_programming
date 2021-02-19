#include <stdio.h>
int main(){
    printf("실수를 입력하시오: ");
    double f;
    scanf("%lf", &f);
    if (f < 0){
        f *=-1;
    }
    int i = ((int)(f * 100)) % 100;
    printf("i=%d\n", i);
}