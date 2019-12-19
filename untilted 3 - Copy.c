#include<stdio.h>
void main()
{
int i,count=0;
for(i=0;i<256;i++,count++)
{
printf("\n %d \%t",i,i);
if(count==20)
{
printf("\n press any key....\n");
getch();
count=0;

}
}
}

