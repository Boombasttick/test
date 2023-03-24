#include <stdio.h>
//大端模式：是指数据的低位保存在内存的高地址中，而数据的高位，保存在内存的低地址中
//小端模式：是指数据的低位保存在内存的低地址中，而数据的高位，保存在内存的高地址中
// 描述当前机器的字节序
// int main()
// {
//     int a = 1;
//     char* pc = (char*)&a;
//     if(*pc==1)
//     {
//         printf("xiao");
//     }
//     else
//     {
//         printf("da");
//     }
//     return 0;
// }


// int check_sys()
// {
//     int a=1;
//     char* pc = (char*)&a;
//     if(*pc==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

int check_sys()
{
    int a=1;
    return *(char*)&a;
}
int main()
{

    int ret = check_sys();
    if(ret==1)
    {
        printf("xiao");
    }
    else
    {
        printf("da");
    }
    return 0;
    return 0;
}