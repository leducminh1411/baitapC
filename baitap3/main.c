#include<stdio.h>
#include<math.h>
/* Tiền khai báo */
// hàm không có tham số truyền vào
// Hàm tính cạnh huyền tam giác vuông với tham số truyền vào là 2 cạnh góc vuông
/** Gợi ý
 * Công thức tính căn bậc 2 trong c 
 * Biến toàn cục sẽ là 2 cạnh góc vuông
 * Biến cục bộ dc nằm trong function tính cạnh huyền
 * */

// Hàm trả về giá trị cạnh huyền của tam giác vuông.
/** Gợi ý
 * 
 * Biến toàn cục sẽ là 2 cạnh góc vuông
 * Biến cục bộ sẽ là cạnh huyền
 * Biến cục bộ dc nằm trong function main()
 * */
float addition( int a, int b)
{
    float sum;
    //sum = a * a;
   // printf ("%f", sum);
    sum = sqrt ( pow(a,2) + pow(b,2));
    return sum;
}
int main()
{
    float minh = addition(2,3);
    printf ("%f", minh);
    return 0;   
}



    