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
    }
    return 0;

}