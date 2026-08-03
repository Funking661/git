#include <stdio.h>
int main()
{
    int hour1 = 0;
    int hour2 = 0;
    int minute1 =0;
    int minute2 =0;
    printf("请输入两个时间(格式为:小时:分钟 小时:分钟):");
    scanf("%d:%d %d:%d", &hour1, &minute1, &hour2, &minute2);
    int dividehour = hour1 - hour2;
    int divideminute = minute1 - minute2;
    if (dividehour < 0)
    {
    if (divideminute > 0)
    {
    divideminute = 60-divideminute;
    dividehour = -dividehour - 1;
    }
    if (divideminute <= 0)
    {
    divideminute = -divideminute;    
    dividehour = -dividehour;
    }
    }
    
    if (dividehour > 0)
    {
    if (divideminute < 0)
    {
    divideminute = 60+divideminute;
    dividehour = dividehour-1;
    }
    }

    if (dividehour == 0)
    {
    if (divideminute < 0)
    {
    divideminute = -divideminute;    
    }
    }
    printf("两个时间的差值为: %d小时%d分钟", dividehour, divideminute);   
}