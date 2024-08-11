# Unixbox
A micro Unix-like environment for FreeDOS(WIP).

# Compiling

On FreeDOS(requires C compiler and make from DJGPP, as it provides a POSIX development and runtime environment):

make strip

Specific commands can be individually compiled and run without the main Unixbox environment. The following builds just the printf and pwd commands:

make printf pwd

# Usage

At the DOS prompt:

UNIXBOX.EXE [command]

Unixbox will run the specified command, or the SH.EXE shell if no command is given.