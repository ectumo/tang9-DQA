# 每日一题2017年4月21日

老九君和短笛玩“抢21”游戏，游戏规则是：第一个人先说“1”或“2”，第二个人要接着往下说一个或两个数，然后又轮到第一个人说，再接着往下说一个或两个数。这样两人反复轮流，每次每个人说一个或两个数都可以，但是不可以连说三个以上的数，且不能说重复的数，只能按照顺序来，谁先抢到21，谁得胜。——用代码模拟这个过程，然后私聊SuperMan给出你的代码。

【PS：其实这个道题是谁先说谁就输了，这里可以用电脑模拟其中一个人的输入逻辑，开始用一个随机数决定是你还是电脑先输入，然后根据这个规律模拟整个过程并最终输出获胜者】
***

```
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int input(int t);
int copu(int s);
int main()
{
    int tol=0;
    printf("\n* * * * * * * *抢21点* * * * * * * \n");
    printf("游戏开始\n");
    rand();  /*初始化随机数发生器*/
    /*取随机数决定机器和人谁先走第一步。若为1，则表示人先走第一步*/
    if(rand()%2)
        tol=input(tol);
    while(tol!=21)  /*游戏结束条件*/
        if((tol=copu(tol)) == 21)  /*计算机取一个数，若为21则机器胜利*/
            printf("我输了! \n");
        else
            if((tol=input(tol)) == 21)  /*人取一个数，若为21则人胜利*/
                printf("我输了! \n");
    printf(" * * * * * * * *游戏结束 * * * * * * * *\n");
    return 0;
}
int input(int t)
{
    int a;
    do{
        printf("请输入你的点数(1或2点):");
        scanf("%d", &a);
        if(a>2 || a<1 || t+a>21)
            printf("输入错误,请再试一次!");
        else
            printf("你输入的点数是:%d\n", t+a);
    }while(a>2 || a<1 || t+a>21);
    return t+a;  /*返回当前已经取走的数的累加和*/
}
int copu(int s)
{
    int c;
    printf("电脑的输入的是:");
    if((s+1)%3 == 0)  /*若剩余的数的模为1，则取1*/
        printf(" %d\n",++s);
    else
        if((s+2)%3 == 0)
        {
            s+=2;  /*若剩余的数的模为2，则取2*/
            printf(" %d\n",s);
        }
        else
        {
            c=rand()%2+1;  /*否则随机取1或2*/
            s+=c;
            printf(" %d\n",s);
        }
    return s;
}
```
***
==这是分割线最短代码--大鱼==
```
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
    srand(time(NULL));
    (rand()%2+1==1)?printf("抢二十一游戏\n我先输入\n%d\n",rand()%2+1):printf("抢二十一游戏\n你先输入\n");
        for(int n,i=1;i<=7;i++)
    {
        scanf("%d",&n);
        (3*i-n>=3 || n-i*3>=3)?printf("你违反了游戏规则！！！"):3*i>n?printf("%d\n",3*i):printf("%d\n",n+rand()%2+1);
    }
}
```
