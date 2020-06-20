#include<stdio.h>
#include<math.h>

long p[10000]={3,5,7},i,j;
int k,n,flag;

void main(){
  for(i=9,n=2;;i+=2){
    j=sqrt(i);
    for(k=0;p[k]<=j;k++){
      if(i%p[k]==0) j=0;
      }
    if(j) p[++n]=i;
    else{
      for(k=flag=0;p[k]<i&&p[k];k++){
	j=sqrt((i-p[k])/2);
	if(j*j*2+p[k]==i){
	  flag=1;
	  break;
	  }
	}
      if(!flag) break;
      }
    }
  printf("\n%li\n",i);
  }