#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    if(y1-y2==0)
    {
        y3=y4=(x1-x2>0?x1-x2:x2-x1);
        x4=x2;
        x3=x1;
        printf("%d %d %d %d",x3,y3,x4,y4);
    }
    else if(x1-x2==0)
    {
        x3=x4=(y1-y2>0?y1-y2:y2-y1);
        y4=y2;
        y3=y1;
        printf("%d %d %d %d",x3,y3,x4,y4);
    }
    else if(abs(x1-x2)==abs(y1-y2))
    {
        y3=y2;x3=x1;
        y4=y1;x4=x2;
        printf("%d %d %d %d",x3,y3,x4,y4);
    }
    else
    {
        printf("-1");
    }
}
