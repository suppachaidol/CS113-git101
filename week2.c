/*-----week2----- 
int เก็บจำนวนเต็ม ขนาด 4 byte
char เก็บอักษร ขนาด 1 byte
float เก็บจำนวนทศนิยม ขนาด 4 byte
double เก็บจำนวนทศนิยม ขนาด 8 byte
long 8 byte
unsigned เก็บเฉพาะค่าบวก
0 ตามด้วยตัวเลข เลขฐาน8
0x เลขฐาน 16
%d=int  %c=character(ตัวเดียว)    %s=character(หลายตัว)
%o=octal %x=hexadecimal*/

#include <stdio.h>
#define for 20
int main()
{
    int a = 10;
    unsigned long long b = 4000000000;
    float c = 10.22;
    double d = 111.112;
    char e = 'a';
    char name[] = "DOL";
    //printf("%f %lf %c %s\n",c,d,e,name);
    //printf("--%d--",for);

    int ans1 = a * e;
    float ans2 = a + c;
    printf("%d\n%f",ans1,ans2);
    

   
}