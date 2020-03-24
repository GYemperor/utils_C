#include <stdio.h>
#include <string.h>
#include <sys/types.h>   
#include <sys/stat.h>   
#include <sys/time.h>
#include <fcntl.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
  int fd;
  //timeval time_Now;
  int a[2] = {5,6};
  char buffer[16];
  memset(buffer,30,sizeof(buffer));
  char buffer_H[8];
  char buffer_L[8];

  char otaworkflag[8];
  unsigned int tmp_otaworkflag = 1;
  sprintf(otaworkflag,"%u",tmp_otaworkflag);

  unsigned long long tmp = 4294967295ULL;
  printf("size of long:%d\n",sizeof(tmp));
  sprintf(buffer,"%u",tmp);
  printf("buffer:%s\n",buffer);
  memcpy(buffer_L,&buffer[8],8);
  memcpy(buffer_H,buffer,8);
  printf("buffer_L:%#X\n",buffer_L);
  printf("buffer_L:%s\n",buffer_L);
  printf("buffer_H:%#X\n",buffer_H);
  printf("buffer_H:%s\n",buffer_H);
  fd = open("/sys/module/tbox_set/parameters/otaworkflag", O_WRONLY);
  if (fd > 0)
  {
    printf("write fd = %d\n",fd);
  }
  write (fd, otaworkflag,sizeof(otaworkflag));
  close(fd);
  fd = open("/sys/module/tbox_set/parameters/vehontime_h", O_WRONLY);
  if (fd > 0)
  {
    printf("write fd = %d\n",fd);
  }
  write (fd, buffer_H,sizeof(buffer_H));
  close(fd);
  fd = open("/sys/module/tbox_set/parameters/vehontime_l", O_WRONLY);
  if (fd > 0)
  {
    printf("write fd = %d\n",fd);
  }
  write (fd, buffer_L,sizeof(buffer_L));
  close(fd);

  return 0;
}
