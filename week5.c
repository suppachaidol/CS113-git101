/*-----week5-----
pointer
int *ptr = &x สร้างตัวแปร pointer แล้วให้ชี้ไปที่ adressของ x
*ptr = ค่าของ x
ptr = adress ของ x*/

#include <stdio.h>
int main()
{
    int x = 100;
    //int a = 0144;
    //int b = 0x64;
    // printf("x = %d", x);
    // printf("reference of x = %lu\n", &x);
    // printf("reference of x = %p\n", &x);

    int number[] = {7,8,9,10,11};
    //int number[100] = {7,8,9,10,11};
    //int number[5];
    /* printf("index 3 = %d\n",number[3]);
    printf("reference index 3 = %p\n",&number[3]);
    printf("reference index 0 = %p\n",&number[0]);
    printf("reference index 0 = %p\n",number);*/

    // int *ptr = &x;
    // int *arrPtr;
    // arrPtr = number; // &number[0]
    // arrPtr = arrPtr + 1;
    // *arrPtr = *arrPtr + 1;
    // * dereferencing
    // printf("arrPtr = %p, *arrPtr = %d\n",arrPtr,*arrPtr);
    // printf("number[1] = %p, number[1] = %d\n",&number[1],number[1]);
    
    // &x =50; ทำไม่ได้
    //ptr = x; พัง
    //*ptr = 50; ทำไม่ได้ พัง

    char input[50];
    // for(int *ptr = number; ptr <= &number[4]; ptr++)
    // {
    //     printf("[%p] = %d\n",ptr,*ptr);
    // }
    // int count = 0;
    // char c;
    // while((c = getchar()) != '\n')
    // {
    //     input[count] = c;
    //     ++count;
    // }
    // printf("input = %s",input);

    int a;
    char c;
    char s[50];
    scanf("%c-%d-%s",&c,&a,&s);
    printf("%c     %d     %s",c,a,s);
    
}