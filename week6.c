/*-----week6-----
pass by value จะ copy ค่าของตัวแปรจากผู้เรียกไปให้ฟังก์ชันและสร้างตัวแปร local ใหม่ในฟังก์ชั่น
ถ้าเปลี่ยนค่าตัวแปรในฟังก์ชั่นจะไม่เปลี่ยนค่าตัวแปรใน global
pass by reference ส่งตำแหน่งของตัวแปรจากผู้เรียกไปให้ฟังก์ชั่นโดยใช้ & ตัวแปรในฟังก์ชั่นจะเป็นตัวแปรเดียวกับ globalโดยใช้ pointer รับค่า
ถ้าเปลี่ยนค่าในฟังก์ชั่นจะเปลี่ยนค่าใน global ด้วย.*/

#include <stdio.h>
//void addten(int numbers[],int n)
void addten(int *numbers,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("number + %d adder = %p, %d\n",i,numbers+i,*(numbers+i));
        *(numbers + i) += 10;
    }
}
int addtwenty(int *n)
{
    *n += 20;
    return 1;
}
int main()
{
    int numbers[] = {5,6,7,8,9,0};
    int n = 6;
    int *ptr = &n;
    addten(numbers,n);  //ส่งด้วย address รับด้วย pointer

    for (int i=0;i<6;i++)
    {
        printf("numbers[%d] = %d\n",i,numbers[i]);
    }
    addtwenty(ptr);
    printf("n = %d\n",n); //ถ้าไม่รับด้วย pointer n จะมีค่าเป็น 6
}