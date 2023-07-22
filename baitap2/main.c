#include<stdio.h>

int main()
{
     
    int n;
    printf ("n = ");
    scanf ("%d", &n);
    printf("%d la n ", n);
    switch (n)
    { 
    case 1:
            printf("\n Nhat");
        break;
    case 2:
            printf("\n Nhi");
        break;
    case 3:
            printf("\n Ba");
        break;
    default:
            printf("Nhap Vao So n Khong Dung ");
        break;
    }
    return 0;
}