#include <stdio.h>
#include <stdlib.h>

int getBitsOfByte(int startPlace, int len, int data) {
    int i = 0;
    int testData = 1;
    
    if (startPlace + len > 8)
    {
        return -1;
    }
    

    for ( i = 0; i < startPlace + len -1; i++)
    {
        testData <<= 1;
        testData |= 1;
    }
    data &= testData;
    data >>= startPlace;
    return data;
}

int main() {
    int data = getBitsOfByte(2,3,0b00011011);
    printf("%d\n",data);
}