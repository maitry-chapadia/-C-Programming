#include<stdio.h>
int main()
{
int i;
for (i=1; i <= 50;i++)
{


printf("Book ID: %d",i);
if (1%5 == 0){
printf("(Special Edition)\n");
continue;
}

printf("\n");
}

return 0;
}
