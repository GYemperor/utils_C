#include <stdio.h>
#include <string.h>
#include <sys/types.h>   
#include <sys/stat.h>   
#include <sys/time.h>
#include <fcntl.h>
#include <fcntl.h>
#include <unistd.h>
int main(){
    FILE *fp = NULL;
    char buf[1024] = {0};
    char tmp[8] = {0};
    int fd = open("/sys/module/tbox_get/parameters/vehicle_name",O_RDONLY);
    if (fd > 0){
        printf("open %d\n",fd);
    }
    read(fd,tmp,sizeof(tmp));
    close(fd);
    printf("open file and read:%s\n",tmp);
    printf("%#X\n",tmp[0]);
    printf("%#X\n",tmp[1]);
    printf("%#X\n",tmp[2]);
    printf("%#X\n",tmp[3]);
    printf("%#X\n",tmp[4]);
    printf("%#X\n",tmp[5]);
    printf("%#X\n",tmp[6]);
    printf("%#X\n",tmp[7]);


    return 0;
}