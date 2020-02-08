/*-----week4-----
สร้างฟังก์ชั่นนอกฟังก์ชั่น main เช่น
int addTen(int x)
{
    printf("x in addTeb = %d\n",x);
    x = x+10;
    return x;
}
int main()
{
    int x=10;
    int y = addTen(x);
    printf("addTen in main = %d\n",y);
    printf("x in main = %d",x);
}*/

#include <stdio.h>
#include <stdlib.h>
int addTen(int x)
{
    printf("x in addTeb = %d\n",x);
    x = x+10;
    return x;
}
int main()
{
    int x=10;
    int y = addTen(x);
    printf("addTen in main = %d\n",y);
    printf("x in main = %d",x);
}
