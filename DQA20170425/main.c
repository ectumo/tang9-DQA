#include <stdio.h>
#include <stdlib.h>

int main()
{   int i=0;
    char *pt = "LaoJiuJun"; // �ַ�����ָ��
    printf("\n [%c] \n", *pt); //*pt��pt[0]��һ��Ԫ�أ�L
    printf("\n [%c] \n", *(pt + 1));//*(pt + 1)=> pt[1]�ڶ���Ԫ�أ�a
    printf("\n [%c] \n", *pt++);//*pt++ ���ִ����Ϻ�ָ������1��λΪ��ָ�����ͣ��ַ�����1���ֽڡ�
                                //ʵ�ʴ�ӡ�Ļ���*pt��ֵ��pt[0] ��һ��Ԫ�� L
    printf("\n [%c] \n", *pt);//*pt����һ��������ӵ���*(pt+1) pt[1] �ڶ���Ԫ�� a
    return 0;
}

/*
������Ϊ
[L]
[a]
[L]
[a]
*/
