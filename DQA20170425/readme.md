# 每日一题2017年4月25日
![image](http://note.youdao.com/yws/public/resource/6fb1034448ad9567dd82cf59ec0d8c47/xmlnote/C4EDD27754854F259186AB4773B92929/3271)

【今天2017-4-25】的每日一题，希望更多的小伙伴都能积极的参与进来了~
提交作业的时候记得@SuperMan一下哦    还是思路和答案一起提交哦！
***

```
#include <stdio.h>
#include <stdlib.h>

int main()
{   int i=0;
    char *pt = "LaoJiuJun"; // 字符类型指针
    printf("\n [%c] \n", *pt); //*pt，pt[0]第一个元素，L
    printf("\n [%c] \n", *(pt + 1));//*(pt + 1)=> pt[1]第二个元素，a
    printf("\n [%c] \n", *pt++);//*pt++ 语句执行完毕后指针自增1单位为该指针类型，字符类型1个字节。
                                //实际打印的还是*pt的值，pt[0] 第一个元素 L
    printf("\n [%c] \n", *pt);//*pt由上一条语句增加到了*(pt+1) pt[1] 第二个元素 a
    return 0;
}

/*
最后输出为
[L]
[a]
[L]
[a]
*/
```
