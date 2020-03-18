#include <stdio.h>
#include <sys/types.h>   
#include <sys/stat.h>   
#include <fcntl.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
  int fd;
  int a[2] = {5,6};
	int t = 100;
  fd = open("/sys/module/tbox_set/parameters/vehicle_speed", O_WRONLY);
  if (fd > 0)
  {
    printf("write fd = %d\n",fd);
  }
  write (fd, a,2);
  close(fd);

  return 0;
}
