printf:
        gcc printf.c -o printf.exe
pwd:
        gcc pwd.c -o pwd.exe
sh:
        gcc sh.c -o sh.exe
cat:
        gcc cat.c -o cat.exe
unixbox:
        gcc unixbox.c -o unixbox.exe
strip: printf pwd cat sh unixbox
        strip *.exe
zip: strip
        zip unixbox.zip *.exe gpl*.txt
zipsrc:
        zip ubsrc.zip makefile *.h *.c gpl*.txt
clean:
        del printf.exe pwd.exe sh.exe cat.exe