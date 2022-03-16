#include<stdio.h>
#include<stdlib.h>
int main()
{
char *pic = "mkdir $(date +%d-%mm-%Y) && fswebcam -r 640x480 --jpeg 85 -D 3 $(date +%d-%mm-%Y).jpg";
system(pic);
return 0;
}
