//pwd.c - print working directory

#include "unixbox.h"

int main(int argc, char *argv[])
{
   char buffer[1000];;
   if(argc>=2) return EXIT_SUCCESS;
   puts(getcwd((char*)&buffer, 1000));
   return EXIT_SUCCESS;
}