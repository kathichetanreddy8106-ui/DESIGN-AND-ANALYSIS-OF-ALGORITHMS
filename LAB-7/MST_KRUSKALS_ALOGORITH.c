#include <stdio.h>
int p[10];
int find(int x) {
    while(p[x] != x)
        x=p[x];
    return x; }
int main() {
int n,e,a[20][3],i,j,k,t,c=0,cost=0,x,y;
scanf("%d %d",&n,&e);
for(i=0; i<e; i++)
    scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
for(i=0; i<n; i++) p[i]=i;
for(i=0; i<e-1; i++)
    for(j=i+1; j<e; j++)
        if(a[i][2] > a[j][2])
            for(k=0; k<3; k++) t=a[i][k], a[i][k]=a[j][k],
                                a[j][k]=t;
for(i=0; i<e && c<n-1; i++) {
    x=find(a[i][0]); y=find(a[i][1]);
    if(x != y) {
        p[x]=y;
        printf("%d - %d = %d\n",a[i][0],a[i][1],a[i][2]);
        cost += a[i][2]; c++; }
}
printf("cost = %d",cost);
}
