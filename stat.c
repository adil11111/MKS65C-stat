#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <time.h>


int main(){
  struct stat * buff = malloc( 1 * sizeof(struct stat));
  int s = stat("liu.alex.txt",buff);
  if(s<0){
    printf("Errors:%s\n", strerror(errno));
  }

  printf("Size: %ld bytes\n",buff->st_size);
  printf("Mode: %o\n", buff->st_mode);
  printf("Time of Last Access: %s",ctime(&(buff->st_atime)));



  return 0;
}
