#include <stdio.h>
#include <sys/time.h>
#include <time.h>

int main(void *args){

    time_t timestamp;  //long int
    struct tm *time_tm;
    //struct timeeval time_val;
    //struct timezonr tz;//时区信息

    time(&timestamp);    
    time_tm = localtime(&timestamp);
    //gettimeofday(&time_val,&tz);

    printf("%d-%02d-%02d---%02d-%02d-%02d\n",time_tm->tm_year+1900,
                                    time_tm->tm_mon+1,
                                    time_tm->tm_mday,
                                    time_tm->tm_hour,
                                    time_tm->tm_min,
                                    time_tm->tm_sec
                                    );
    return 0;
}