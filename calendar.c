#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    
    char *cmd="cal";
    system(cmd);
    printf("choose any option:");
    printf("\n1.Previous month:");
    printf("\n2.Next month:");
    printf("\n3.Enter yyyy/mm:");
    printf("\n4.Exit:\n");
    scanf("\n%d",&a);
    switch(a)
    {
        case 1:
        printf("=========================================");
        char *pre = "cal -B1";
        system(pre);
        break;
        case 2:
        printf("=========================================");
        char *next = "cal -A1";
        system(next);
        break;
        case 3:
        printf("==============================");
        system("read mm && read yy && cal $mm $yy");
        break;
        default :
        printf("thank u");
   }
  return 0;
}
