#include <stdio.h>
#include <limits.h>
typedef struct
{
    int i_val;              //定义一个整型i
    unsigned short us_val;  //定义一个无符号短整型us_val
} Data;//结构体类型为Data4+2+2个间隙字节占8个字节
       //结构体变量才包含了实实在在的数据，需要内存空间来存储。
       //含一个i_val变量 整型4个字节，一个us_val变量 无符号短整型2个字节。

int main (void)
{
    Data demo; //data定义demo (包含demo.i_val int;demo.us_val unsigned short;)
    demo.us_val = 0x3578; //类型为无符号短整型 赋值为16进制表示方式0x3578;存储为为0111,1000,0011,0101
    char *pc_val = (char*) &demo; //*pc_val //16位系统占2个字节 32位占4个字节 64位占8个字节(看编译器的选择编译)指向char类型数据。
    unsigned short *pc_val2 = &demo.us_val;//(char*) &demo 将demo内存地址的指向的类型转为char类型占1个字节。原本为结构体Data类型。4+2+2空隙共8个字节。
    printf("%d %d\n",sizeof(pc_val),(int)(*(pc_val+4)));

    return 0;
}
//打印pc_val;指针类型所占的字节
//打印*(pc_val+4)的值(原本为demo第5个字节数据值。)强制转换为int后的值(属于升级不会导致数据截取）。
//结论
//pc_val为指针类型 在编译为32位系统使用时为4个字节。
//*pv_val+4 就是从&demo开始增加4个字节的值转换为整型
//结构体类型demo1-4个字节为domo.i_val整型空值,第5第6个字节为demo.us_val 值为0011,0101,0111,1000(16进制表示方式0x3578)
///我理解是4 53（0x35）数据存储的时候时先存分配空间的首字节，然后再存下一个字节？而不是从分配的N个字节的末尾字节开始？
/*最终显示为
4 120
*/
