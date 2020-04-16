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
  char buffer[32];
  memset(buffer,30,sizeof(buffer));

  char otaworkflag[8];
  unsigned int tmp_otaworkflag = 1;
  sprintf(otaworkflag,"%u",tmp_otaworkflag);

  //unsigned long long tmp = 4294967295ULL;
  unsigned long long tmp = 4294967299ULL;
  printf("size of long:%d\n",sizeof(tmp));
  sprintf(buffer,"%u",tmp);
  printf("buffer:%s\n",buffer);


  fd = open("/sys/module/tbox_set/parameters/vehontime_h", O_WRONLY);
  if (fd > 0)
  {
    printf("write fd = %d\n",fd);
  }
  write (fd, buffer,sizeof(buffer));
  close(fd);
  // fd = open("/sys/module/tbox_set/parameters/vehontime_l", O_WRONLY);
  // if (fd > 0)
  // {
  //   printf("write fd = %d\n",fd);
  // }
  // write (fd, buffer_L,sizeof(buffer_L));
  // close(fd);

  return 0;
}
