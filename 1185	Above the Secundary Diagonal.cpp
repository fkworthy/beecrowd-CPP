#include <stdio.h>
 
int main()
{
    double a[12][12],sum=0.0;
    int i,j,x,y,z=11;
    char s[2];
    scanf("%s",&s);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&a[i][j]);
          }
       }
    for(x=0;x<=11;x++){
        for(y=0;y<z;y++)
            sum+=a[x][y];
            z--;
    }
    if(s[0]=='S'){
        printf("%.1lf\n",sum);
    }
    else if(s[0]=='M'){
        printf("%.1lf\n",sum/66.0);
    }
    return 0;
}
