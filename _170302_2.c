#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int p,n,b,input,sum=0,ne,i,j;
  scanf("%d",&b);
  for(j=0;j<b;j++) {
      scanf("%d %d", &p ,&n);
      for(i=0;i<n;i++) {
          scanf("%d",&input);
          sum=sum+input;  //�N�R�F�誺����[�` 
      }
      if(p<sum) {
          ne=sum-p;
          printf("N%d\n", ne);
      }
      else {
          printf("Y\n");
      }
      sum=0;  //�����`�M�k�s 
  }
  system("PAUSE");	
  return 0;
}
