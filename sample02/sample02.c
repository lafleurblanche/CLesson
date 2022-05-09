#include <stdio.h>
#include <time.h>
#include "fileopen.h"

int main(void)
{
    int i;
    long cpu_time;
    double sec;

    fileopen();

    /* CPU時間チェック */
    cpu_time = clock();

    /* 秒に変換 */
    sec = (double)cpu_time / CLOCKS_PER_SEC;

    printf("%f秒\n", sec);

}
