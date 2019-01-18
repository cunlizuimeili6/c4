#include <stdio.h>
struct student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[100];
};
int main(){
    struct student arr[1000];
    int code;
    int index=0;
    int sum=0;
    printf("xueshengchengjiguanlixitong\n");
    while(1){
    printf("1---tianjia\n");
    printf("2---shanchu\n");
    printf("3---xianshisuoyou\n");
    printf("4---ZFBJG\n");
    printf("5---MYKBJG\n");
    printf("6---ZFZG\n");
    printf("7---PJFZG\n");
    printf("8---TUICHU\n");
    printf("gongnengbianhao\n");
    scanf("%d",&code);
    if(code==1){
        char x;
        printf("xueshengxingming\n");
        scanf("%s",&(arr[index].name));
        printf("yuwenchengji\n");
        scanf("%d",&(arr[index].yuwen));
        printf("shuxue\n");
        scanf("%d",&(arr[index].shuxue));
        printf("yingyu\n");
        scanf("%d",&(arr[index].yingyu));
        index++;
        printf("jixu\n");
        scanf("%c",&x);
        scanf("%c",&x);
    }
    }
    return 0;

}