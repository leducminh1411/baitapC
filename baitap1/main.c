#include <stdio.h>

int main(){

    int a,b;
    
    printf ("a = ");
    scanf("%d", &a);
    printf ("b = ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("a lon hon b");
    }
    else if (a == b)
    {
        printf("a bang b");
    }
    else {
        printf("a nho hon B");
    }


}