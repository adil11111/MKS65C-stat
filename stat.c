#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <time.h>


int main(){
  struct stat * buff;
  int s = stat("./stat.c",buff);
  if(s<0){
    printf("Errors:%s\n", strerror(errno));
  }
  char date[36];
  strftime(date, 36, "%c", localtime(&(buff->st_atime)));
  printf("Size: %lld bytes\n",buff->st_size);
  printf("Mode: %o\n", (buff->st_mode));
  printf("Time of Last Access: %s\n",date);



  return 0;
}
