#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp = NULL;
    char buf[1024] = {0};
    fp = popen("cat /sys/module/tbox_set/parameters/vehicle_speed","r");
    printf("popen %d\n",*fp);
    if (fp == NULL)
    {
        printf("popen faield\n");
        return 0;
    }
    fread(buf, 1024,1,fp);
    printf("%s\n",buf);
    pclose(fp);

    return 0;
}