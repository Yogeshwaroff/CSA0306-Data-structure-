#include<stdio.h>
int main()
{
	int i,j,a[100],n;
     printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i = 0; i <n; i++) 
        scanf("%d", &a[i]);
    for(i = 0; i <n; i++) 
 {
 if(a[i]%2==0)
 printf("even %d\n",a[i]);
 else
 printf("odd %d\n",a[i]);}
    return 0;
}
