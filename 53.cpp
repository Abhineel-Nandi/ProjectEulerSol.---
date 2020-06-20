#include <iostream>
#include <cmath>
#include <map>
#include <algorithm>

double C(int n, int k){
  if(k==0 || k==n)
    return 1;
  static std::map<std::pair<int,int>,double> m;
  double &c=m[std::make_pair(n,k)];
  if(!c)
    c=C(n-1,k-1)+C(n-1,k);
  return c;
}

int main(){
  int count=0;
  for(int i=1;i<=100;++i)
    for(int j=0;j<=i;++j)
      count+=C(i,j)>1000000;
  std::cout << count << std::endl;
}