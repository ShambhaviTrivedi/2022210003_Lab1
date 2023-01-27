#include<stdio.h>
int main()
{ int a[10],n,X=0,i=0,j=n-1;
  //-1, 5, 2, 10, -9, 7, -80, -7
  printf("Give size of the array (max 20): ");
  scanf("%d",&n);
  printf("Give the numbers: \n");
  for(int i=0;i<n;i++)
   { printf("num[%d]: ",i);
    scanf("%d",&a[i]); }
  while (i < j)
    {
        if (a[i] > 0 && a[j] > 0) // Both Positive
        {
            j--;
        }
        if (a[i] > 0 && a[j] < 0) // Swapping case
        {
            X = a[j];
            a[j] = a[i];
            a[i] = X;
            i++;
            j--;
        }
        if (a[i] < 0 && a[j] < 0) // both negative
        {
            i++;
        }
        if (a[i] < 0 && a[j] > 0) // i negative j positive
        {
            j--;
            i++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}