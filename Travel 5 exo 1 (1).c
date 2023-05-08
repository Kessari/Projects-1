#include<stdio.h>
typedef struct {
    int h,m,s;
} temp;
void fon1 (temp t1) {
    int x;
    x =+ t1.h;
    x=+ t1.m*60;
    x=+ t1.h*3600;
    printf("The value in seconds is %d",x);
}
void fon2 (int s) {
    temp g;
    g.h = s/3600;
    s = s%3600;
    g.m = s/60;
    g.s = s%60;
    printf("la valeurs en temp est %d heure %d min %d seconds",g.h,g.m,g.s);
}
void fon3 (temp t1,temp t2) {
    temp t3;
    t3.s = t1.s+t2.s;
    if(t3.s>60) {
        t3.s = t3.s%60;
        t3.m =+1;

    }
    t3.m = t1.m+t2.m;
    if(t3.m>60) {
        t3.m = t3.m%60;
        t3.h =+1;
    }
    t3.h = t1.h + t2.h;
    printf("la soom est %d heure %d min %d second ",t3.h,t3.m,t3.s);


}
main () {
    temp t1,t2;

    printf("enter la valur de t1 :");
    scanf("%d",&t1.h );
    scanf("%d",&t1.m);
    scanf("%d",&t1.s );
//3    printf("enter la valur de t2 :");
//3    scanf("%d",&t2.h );
//3    scanf("%d",&t2.m);
//3    scanf("%d",&t2.s );
//3    if(t1.h||t1.m||t1.s||t2.h||t2.m||t2.s>60) {
//3        printf("you misentered the values");
//3        return 1;
//33    }
    
//3     fon3 (t1,t2);
//1   fon1(t1);
//2   int s;
//2   printf("enter la valur en secondes ");
//2   scanf("%d",&s);
//2   fon2(s);
}