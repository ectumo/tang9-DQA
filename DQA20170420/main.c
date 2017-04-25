//3天1元，1天3元，1天5元，共130元干90天
#include <stdio.h>
int main (void){ int i,j,k;
{for(i=3;i<390;i+=3)
    {for(j=1;j<65;j++)
        {for(k=1;k<25;k++)
            {if(((i/3+j*3+k*5)==130) && ((i+j+k)==90))
              {printf("不语%-2d天 工资%-4d\t志乐%-2d天 工资%-4d\t长空%-2d天 工资%-4d\n",i,i/3,j,j*3,k,k*5);}}}}}
return 0;}
