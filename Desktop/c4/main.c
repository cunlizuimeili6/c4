#include <stdio.h>
#include<math.h>
struct point{
    int x;
    int y;
};
int main(){
    int code;
    int index=0;
    struct point arr[200];
    printf("cheweiguanlixitong");
    while(1){
        printf("1---tianjia\n");
        printf("2---shanchu\n");
        printf("3---xianshisuoyou\n");
        printf("4---dangqianweizhijuli\n");
        printf("5---tuichu\n");
        printf("gongnengbianhao\n");
        scanf("%d",&code);
        if(code==1){
            char a;
            int x;
            int y;
            printf("tianjia\n");
            scanf("%d",&x);
            scanf("%d",&y);
            arr[index].x=x;
            arr[index].y=y;
            index++;
            printf("jixu\n");
            scanf("%c",&a);
            scanf("%c",&a);
        }
        if(code==2){
            char a;
            if(index>0){
                index--;
            printf("chenggongjixu\n");
            scanf("%c",&a);
            scanf("%c",&a);
            }else{
            printf("shibaijixu\n");
            scanf("%c",&a);
            scanf("%c",&a);
            }
        }
        if(code==3){
            char a;
            printf("xianshisouyou\n");
            for(int i=0;index>i;i++){
                printf("di %d geweizhi (%d,%d)\n",i+1,arr[i].x,arr[i].y);
            }
            printf("jixu\n");
            scanf("%c",&a);
            scanf("%c",&a);
        }
        if(code==4){
            char a;
            int x;
            int y;
            printf("dangqianweizhi\n");
            scanf("%d",&x);
            scanf("%d",&y);
            double min=100000;
            int carID=0;
            for(int i=0;index>i;i++){
                int dx=x-arr[i].x;
                int dy=y-arr[i].y;
                double l=sqrt(dx*dx+dy*dy);
                if(min>l){
                    min=l;
                    carID=i;
                }
            }
            printf("dangqianweizhiyudi %d gecheliangjuliwei %lf,shizuixiaojuli\n",carID+1,min);
            printf("jixu\n");
            scanf("%c",&a);
            scanf("%c",&a);
        }
        if(code==5){
            printf("tuichu\n");
            break;
        }
    }
    return 0;

}