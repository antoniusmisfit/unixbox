//printf command for Unixbox
//#include "unixbox.h"
#include <stdio.h>
#include <string.h>

int ub_printf(char* str)
{
char* ch=str;
while(*ch!=0x00)
{
//handle backslashed characters
if(*ch=='\\')
{
switch(*(ch+1))
{
case 'n':
        fputc('\n',stdout);
        ch+=2;
        break;
case '\\':
        fputc('\\',stdout);
        ch+=2;
        break;
case 't':
        fputc('\t',stdout);
        ch+=2;
        break;
case 'v':
        fputc('\v',stdout);
        ch+=2;
        break;
case 'a':
        fputc('\a',stdout);
        ch+=2;
        break;
default:
        //ignore and move on
        ch+=2;
}
}
else
{
    fputc(*ch,stdout);
    ch++;
}
}
return 0;
}

int main(int argc, char *argv[])
{
   if(!strcmp(argv[1], "--help"))
   {
      puts("PRINTF\nUsage: PRINTF \"string\"");
      return 0;
   }

   if(!strcmp(argv[1], "--version"))
   {
      puts("Unixbox PRINTF v0.1");
      return 0;
   }
   return ub_printf(argv[1]);
}