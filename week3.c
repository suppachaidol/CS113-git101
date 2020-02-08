/*-----week3-----
gets(),fgets(ตัวแปร,จำนวนstring,stdin) ใช้รับข้อมูลเข้าจากคีย์บอร์ดเป็น string
atoi เปลี่ยนเป็น int,atof เปลี่ยนเป็น float,atol เปลี่ยนเป็น long
puts() แสดงผลแล้วเปลี่ยนบรรทัด
การใช้ if 
if(expression1){
	statement1
}
else if(expression2){
	statement2
}
else{
	statement3
}
การใช้ while
while(expression){
	statement
}
การใช้for
for(start;stop;step){
	statement
}
do while
do {
       statement
    } while (expression);
statement ทำงานแล้วจะดูว่า expression เป็นจริงหรือเท็จถ้าจริงstatementทำงานอีก
วนซ้ำจน expression เป็นเท็จ*/

#include <stdio.h>
#include <stdlib.h>
char name[20];
char n[5];
int main()
{
    //printf("Enter name : ");
    //gets(name);
    //fgets(name, 20, stdin);
    //printf("%s\n",name);
    
    fgets(n, 5, stdin);
    int i = atoi(n);
    //getchar(c);
    //double d = atof(n);
    //long l = atol(n);
    //printf("n = %s , i = %d", n, i);

    //puts(n);
    //putchar(100); // putchar('h');

    //int found = 0;  //false
    //float isIn = 0.0; //false
    //char isExist = '\0'; //false
    //fgets(n, 5, stdin);
    //int i = atoi(n);
    //if ( i > 0 && i < 20){
    //    print("if\n");
    //}else if (i < 100 || !found && isExist){
    //    printf("else if\n");
    //}else if(i > 'A' && i < 'z'){
    //    printf("else if 2\n");
    //}else {
    //    printf("%d\n", i > 0);
    //}

    //fgets(n, 5, stdin);
    //int i = atoi(n);

    //int count = 0;
    //while (count < i){
    //    printf("%d\n", count);
    //    count++;
    //}
    
    //for (int j = 0; j < i ; j++){
    //    printf("%d\n", j);
    //}

}