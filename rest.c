#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int p,sum=0,cnt=0;
  printf("�п�J �\�I���� �� 999 ���}�G");
  scanf("%d", &p);
  
  while(p!=999) {
     cnt++;
     sum+=p;
     printf("�п�J �\�I���� �� 999 ���}�G");
     scanf("%d",&p);
  }
  printf("�`�@�O %d �D�\�I�A %d\n", cnt, sum);
  system("PAUSE");	
  return 0;
}
