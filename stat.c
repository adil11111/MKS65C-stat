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
  //char permissions[8][4] = {"---","--x","-w-","-wx","r--","r-x","rw-","rwx"};
  //printf("User: %o\n", ((buff->st_mode)/64)%8);
  //printf("Group: %o\n", ((buff->st_mode)/8)%8);
  //printf("Other: %o\n", ((buff->st_mode))%8);
  /*int u = ((buff->st_mode)/64)%8;
    int g = ((buff->st_mode)/8)%8;
    int o = ((buff->st_mode))%8;
    char user[4];
    //strcpy(user,permissions[3]);*/
  //printf("User: %s\n",permissions[3]);

  return 0;
}
