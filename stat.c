#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(){
  struct stat * buff;
  int fd = open("liu.alex.txt",O_RDONLY);
  printf("%d", stat("liu.alex.txt",buff));
  printf("Error:%s\n", strerror(errno));
  return 0;
}
