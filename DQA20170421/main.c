#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int pcchoice(int ln, int wn, int cn, int mx, int mi, int in); //ln 上一个数，wn，胜利数，cn当前数 //mx 上限 mi下限 in每次间隔
//int humchoice(int ln, int wn, int cn); //人机大战用
int main(void)
{
    const int WINNUM = 21;
    const int MIN = 1; // 数字范围下限 规则改变用
    const int MAX = 2; // 数字范围上限 规则改变用
    const int INTERVAL = 1; //数字每最小间隔 规则改变用
    const int PLYNUM = 2; //参与抢数的人和电脑总数。
    int fisrtnum; //随机数决定谁先开始 0 or 1
    int lastnum; //最后一次喊叫数
    int currnum; //当前数
    int pcnum;  // 电脑选的数
    //int humnum; // 玩家选的数
    int round; //轮数
    printf("这是一个抢数字[%d]的数字游戏\n",WINNUM);
    printf("游戏规则是：第一个人先说“1”或“2”，"
           "第二个人要接着往下说一个或两个数，"
           "然后又轮到第一个人说，再接着往下说"
           "一个或两个数。这样两人反复轮流，每"
           "次每个人说一个或两个数都可以，但是"
           "不可以连说三个以上的数，且不能说重"
           "复的数，只能按照顺序来，谁先抢到%d"
           "谁就获得胜利。", WINNUM);
    srand((unsigned) time(NULL));
    while (currnum!=WINNUM)
    {fisrtnum = rand() % 2; //1为人先喊，0为电脑先喊;
    round = 0;//初始化回合数;
    lastnum = 0; //初始化上一个喊得数;
    currnum = 0; //初始化当前数；
    printf("当前第%d轮：电脑%d喊的数为：\t", round%2+1, fisrtnum + round % PLYNUM + 1);
    lastnum = pcnum = pcchoice(lastnum,WINNUM,currnum,MAX,MIN,INTERVAL);
    currnum += pcnum;
    printf("%d\t数值为：%d\n", pcnum, currnum);
    getchar();
    round++;}
    printf("游戏结束当前获得胜利的是电脑%d\n",round % PLYNUM + 1);
    return 0;
}
int pcchoice(int ln, int wn, int cn, int mx, int mi, int in)
{
    int pc,i;
    pc = ( wn - cn) % ((mx - mi)/in + 1);
    while (pc == ln)
    {
        for (i = mi; i <= mx ; i += in)
            pc=(pc +i)%mx;
    }
    return pc;
}
/*
int humchoice(int ln, int wn, int cn)
{
    int pc,int wn, int cn;
    pc = ( wn- cn) % 3;
    return hum;
}
*/
