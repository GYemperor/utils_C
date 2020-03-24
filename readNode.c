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
    int fd = open("/sys/module/tbox_get/parameters/otaworkflag",O_RDONLY);
    if (fd > 0){
        printf("open %d\n",fd);
    }
    read(fd,tmp,sizeof(tmp));
    close(fd);
    printf("open file and read:%s\n",tmp);
    printf("%#X\n",tmp[0]);

    fp = popen("cat /sys/module/tbox_get/parameters/otaworkflag","r");
    printf("popen %d\n",*fp);
    if (fp == NULL)
    {
        printf("popen faield\n");
        return 0;
    }
    fread(buf, 1024,1,fp);
    printf("%s\n",buf);
    printf("%#X\n",buf[0]);
    pclose(fp);

    return 0;
}