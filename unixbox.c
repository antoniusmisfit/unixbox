//unixbox.c - Unixbox init environment

#include "unixbox.h"

int main(int argc,char* argv[])
{
    //set unix-specific environment variables
    //setenv("USER","root",1);
    //setenv("SHELL","c:\\unixbox\\sh.exe",1);
    setenv("UID","0",1);
    setenv("TERM","xterm",1);
    setenv("SH_PROMPT","# ",1);
    if(argc<2) system("sh");
    else system(argv[1]);
    return 0;
}