#include<stdio.h>
int main() {
  char s[10]; scanf("%s",s);
  int o=0, x=0, q=0;
  for (int i=0; i<10; i++) {
    if (s[i]=='o') o++;
    if (s[i]=='x') x++;
    if (s[i]=='?') q++;
  }
  int y=0;
  if(o==4) y=24;
  if(o==3) y=36+6*4*q;
  if(o==2) y=14+2*6*q*q+6*4*q;
  if(o==1) y=1+4*q*q*q+6*q*q+4*q;
  if(o==0) y=q*q*q*q;
  printf("%d\n",y);
  return 0;
}