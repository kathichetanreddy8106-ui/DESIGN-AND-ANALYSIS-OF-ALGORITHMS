#include <stdio.h>
#define I 999
int main() {
int n,a[10][10],v[10]={0},i,j,k,min=I,cost=0,u,y;
scanf("%d",&n);
for(i=0; i<n; i++)
    for(j=0; j<n; j++)
        scanf("%d",&a[i][j]);   v[0]=1;
for(k=0; k<n-1; k++) {
    min = I;
    for(i=0; i<n; i++)
        if(v[i])
            for(j=0; j<n; j++)
                if(!v[j] && a[i][j] < min)
                    min = a[i][j], u=i, y=j;
    v[y] = 1;
    printf("%d - %d = %d\n",u,y,min);
    cost += min;
}
printf("cost = %d",cost);
}
