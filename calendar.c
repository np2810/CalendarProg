#include<stdio.h>
#include<stdlib.h>

int main()
{
      char a;
      char *cmd="cal";
      system(cmd);
      while(1)
    {
    printf("choose any option:");
    printf("\na.Previous month:");
    printf("\nb.Next month:");
    printf("\nc.Enter mm yyyy:");
    printf("\nd.Exit:\n");
    scanf("\n%c",&a);
    switch(a)
    {
        
        case 'a':
        printf("=========================================");
        char *pre = "cal -B1";
        system(pre);
        break;
        case 'b':
        printf("=========================================");
        char *next = "cal -A1";
        system(next);
        break;
        case 'c':
        printf("==============================");
        system("read mm && read yy && cal $mm $yy");
        break;
        case 'd':
        printf("thank u");
        return 0;
        default:
        printf("Please enter a valid option\n");
        }
    }
}

