//3��1Ԫ��1��3Ԫ��1��5Ԫ����130Ԫ��90��
#include <stdio.h>
int main (void){ int i,j,k;
{for(i=3;i<390;i+=3)
    {for(j=1;j<65;j++)
        {for(k=1;k<25;k++)
            {if(((i/3+j*3+k*5)==130) && ((i+j+k)==90))
              {printf("����%-2d�� ����%-4d\t־��%-2d�� ����%-4d\t����%-2d�� ����%-4d\n",i,i/3,j,j*3,k,k*5);}}}}}
return 0;}