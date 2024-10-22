#include<stdio.h>
#define max 25
void main()
{
int frag[max],b[max],f[max],i,j,nb,nf,temp;
static int bf[max],ff[max];
printf("\n****Memory management scheme_first fit****");
printf("\nenter the number of blocks:");
scanf("%d",&nb);
printf("enter the number of files:");
scanf("%d",&nf);
printf("\nenter the size of blocks:\n");
for(i=1;i<=nb;i++)
{
printf("block %d:",i);
scanf("%d",&b[i]);
}
printf("enter the size of the files:\n");
for(i=1;i<=nf;i++)
{
printf("file %d:",i);
scanf("%d",&f[i]);
}
for(i=1;i<=nf;i++)
{
for(j=1;j<=nb;j++)
{
if(bf[j]!=1)
{
temp=b[j]-f[i];
if(temp>=0)
{
ff[i]=j;
break;
}
}
}
frag[i]=temp;
bf[ff[i]]=1;
}
printf("\nfile_no:\tfile_size:\tblock_no:\tblock_size:\tfragement");
for(i=1;i<=nf;i++)
printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i,f[i],ff[i],b[ff[i]],frag[i]);
}


