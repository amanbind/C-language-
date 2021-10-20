#include<stdio.h>
int main()
{
int i,k=0,x[10],y[10],c[25],j,n,n1,d[25],f=0;
printf("\n Number of Elements in SET 1:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Please Enter the Elements no %d : ",i+1);
scanf("%d",&x[i]);
}
printf("\n Number of Elements in set 2: ");
scanf("%d",&n1);
for(i=0;i<n1;i++)
{
printf("\n Please Enter the Elements no %d :",i+1);
scanf("%d",&y[i]);
}
for(i=0;i<n;i++)
{
c[k]=x[i];
k++;
}
for(i=0;i<n;i++)
{
for(j=0;j<n1;j++)
{
if(y[i]==x[j])
break;
}
if(j==n)
{
c[k]=y[i];
k++;
}
}
printf("\n The Union set is:{");
for(i=0;i<k;i++)
printf("%d,",c[i]);
printf("}\n");
for(j=0;j<n;j++)
{
for(i=0;i<n1;i++)
{
if(y[i]==x[j])
break;
}
if(i!=n1)
{
d[f]=y[i];
f++;
}
}
printf("\n The Intersection set is :{");
for(i=0;i<f;i++)
printf("%d,",d[i]);
printf("}");
}