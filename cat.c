//cat.c - simple cat command for Unixbox
//can be compiled on any standard C compiler
#include <stdio.h>

static char buffer[2000];
int main(int argc,char* argv[])
{
FILE* handle;
if(argc<2) handle=stdin;
else handle=fopen(argv[1],"r");
while(!feof(handle))
{
fread(&buffer,sizeof(buffer),1,handle);
printf(buffer);
}
fclose(handle);
return 0;
}