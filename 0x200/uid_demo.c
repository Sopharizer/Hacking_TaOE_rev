#include <stdio.h>
#include <unistd.h>

int main() { 
   printf("実uid： %d\n", getuid()); 
   printf("実効uid： %d\n", geteuid());
}
