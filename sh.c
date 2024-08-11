//sh.c - sh command source file

#include "unixbox.h"


static char command_line[1000];
static char prompt[500];
int main(int argc, char *argv[])
{
   if(argc>=2)
   {
   if(!strcmp(argv[1], "--help"))
   {
      puts("UNIXBOX sh");
      puts("UNIXBOX sh --help|--version");
      return 0;
   }
   else if(!strcmp(argv[1], "--version"))
   {
      puts("UNIXBOX sh v0.1");
      return 0;
   }
   }
   strcpy((char*)&prompt,getenv("SH_PROMPT"));
   loop:
   printf("\n%s ",prompt);
   fgets((char*)&command_line,1000,stdin);

   if(!strcmp(command_line, "exit\n")) return 0;
   else if(strcmp(command_line, "\n"))
   {
      system(command_line);
   }

   goto loop;

   return 0;
}