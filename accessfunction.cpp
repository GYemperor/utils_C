/**
 * 判断文件是否存在
*/

#include <iostream>
#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"

using namespace std;

int main(){

// F_OK 是否存在，存在返回0
// W_OK 是否可写，可写返回0
// R_OK 是否可读，可读返回0
//返回非零值，说明文件不存在
    if (access("/foton/VIN.vin",F_OK))
    {
        printf("file doesn`t exist!\n");
    } else
    {
        printf("file has alreday exist!\n");
    }
    
    
    
    return 0;
}