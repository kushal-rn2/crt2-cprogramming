#include<stdio.h>
#include<string.h>
struct student
{
char name[10000];
int rno;
float fee;
char add[100000];
}s;
int main()
{
strcpy(s.name,"kushal");
s.rno=221710308058;
s.fee=245700;
strcpy(s.add,"hyd");
printf("\n STUDENT DETAILS:\n");
printf("\n name:%s",s.name);
printf("\n rollno:%d",s.rno);
printf("\n fee:%.2f",s.fee);
printf(" address:%s",s.add);
return 0;
}
