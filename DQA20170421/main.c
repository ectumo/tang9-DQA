#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int pcchoice(int ln, int wn, int cn, int mx, int mi, int in); //ln ��һ������wn��ʤ������cn��ǰ�� //mx ���� mi���� inÿ�μ��
//int humchoice(int ln, int wn, int cn); //�˻���ս��
int main(void)
{
    const int WINNUM = 21;
    const int MIN = 1; // ���ַ�Χ���� ����ı���
    const int MAX = 2; // ���ַ�Χ���� ����ı���
    const int INTERVAL = 1; //����ÿ��С��� ����ı���
    const int PLYNUM = 2; //�����������˺͵���������
    int fisrtnum; //���������˭�ȿ�ʼ 0 or 1
    int lastnum; //���һ�κ�����
    int currnum; //��ǰ��
    int pcnum;  // ����ѡ����
    //int humnum; // ���ѡ����
    int round; //����
    printf("����һ��������[%d]��������Ϸ\n",WINNUM);
    printf("��Ϸ�����ǣ���һ������˵��1����2����"
           "�ڶ�����Ҫ��������˵һ������������"
           "Ȼ�����ֵ���һ����˵���ٽ�������˵"
           "һ�������������������˷���������ÿ"
           "��ÿ����˵һ���������������ԣ�����"
           "��������˵�������ϵ������Ҳ���˵��"
           "��������ֻ�ܰ���˳������˭������%d"
           "˭�ͻ��ʤ����", WINNUM);
    srand((unsigned) time(NULL));
    while (currnum!=WINNUM)
    {fisrtnum = rand() % 2; //1Ϊ���Ⱥ���0Ϊ�����Ⱥ�;
    round = 0;//��ʼ���غ���;
    lastnum = 0; //��ʼ����һ��������;
    currnum = 0; //��ʼ����ǰ����
    printf("��ǰ��%d�֣�����%d������Ϊ��\t", round%2+1, fisrtnum + round % PLYNUM + 1);
    lastnum = pcnum = pcchoice(lastnum,WINNUM,currnum,MAX,MIN,INTERVAL);
    currnum += pcnum;
    printf("%d\t��ֵΪ��%d\n", pcnum, currnum);
    getchar();
    round++;}
    printf("��Ϸ������ǰ���ʤ�����ǵ���%d\n",round % PLYNUM + 1);
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
