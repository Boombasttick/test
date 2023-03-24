 #include <stdio.h>

int main()
{
    int a=10;
    float r=10.0;
    return 0;
}
//整形家族：
//char:   unsigned char    signed char
//short: unsigned short   signed short
//int:  unsigned int    signed int
//long:  unsigned long   signed long
//浮点型家族：
//float:
//double:
//构造类型：数组类型、结构体类型 struct 、枚举类型 enum、联合类型 union
//指针类型：int*  char*   float*   void*
//空类型  void  通常用于返回类型、函数的参数、指针类型


void test(void)
{
    printf("hello!!!");
}
int main()
{
    test(100);
    return 0;
}

