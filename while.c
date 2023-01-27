#include<stdio.h>
int main()
{ int f=1,s=1,i=0,N;
  int nextterm=0; // f+s;
  printf("FIBONACCI SERIES!! \n");
  printf("Number of terms: ");
  scanf("%d",&N);
  printf("Series: \n %d \n %d \n",f,s);
  /*for(int i=0;i<=N;i++)
  { nextterm=s+f;
    printf("%d \n",nextterm);
    f=s;
    s=nextterm;
  }*/
  while(i<=N)
  { nextterm=f+s;
    printf("%d \n",nextterm);
    f=s;
    s=nextterm;
    i++;
  }
  return 0;

}