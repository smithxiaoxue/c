#include <stdio.h>
#include <math.h>

struct point
{
    int x;
    int y;
};
int main()
{
    int index = 0;
    struct point arr[100];
    printf("huanyingjinruzhuanzheguanlixitong\n");
    while (1)
    {
        printf("1--tianjiacheliangweizhi\n");
        printf("2--shanchuzuihoucheliangweizhi\n");
        printf("3--xianshiquanbucheliangweizhi\n");
        printf("4--fanhuiliwozuijindecheliang\n");
         printf("5--tuichuxitong\n");
         printf("qingxuanzexiangyingdegongneng\n");
        int code;
        scanf("%d", &code);
        if (code == 1)
        {
            printf("qingshurucheliangweizhidexdezuobniaoheyxuobiao\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);
            arr[index].x = x;
            arr[index].y = y;
            index++;
            printf("tianjiawanxcheng,dianjihuichejixu\n");
            char zz;
            scanf("%c", &zz);
            scanf("%c", &zz);
        }
        if (code == 2)
        {
            printf("shanchucheliangweizhide-x-zuobiaohex-zuobiao\n");
            int x;
            int y;
            scanf("%d", &x);
            scanf("%d", &y);
            arr[index].x = x;
            arr[index].y = y;
            index--;
            printf("shanchuchenggong,dianjihuichejixu\n");
            char zz;
            scanf("%c", &zz);
            scanf("%c", &zz);
        }
    }
 return 0;
}
