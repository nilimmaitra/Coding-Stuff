#include<iostream>
using namespace std;
int main(){
	int a,b,c, hcf, st;
	cout<<"Enter the co-ef.s (a,b,c) of the equation ax^2+bx+c=0\n";
	cin>>a>>b>>c;
	st=a<b?(a<c?a:c):(b<c?b:c);
  for (hcf=st;hcf>=1;hcf--){  	  
    if (a%hcf==0 && b%hcf==0 && c%hcf==0)
      break;
}
  a/=hcf; b/=hcf; c/=hcf;
   while (c%2 == 0){
      n = n/2;
   }
   for (int i = 3; i <= sqrt(n); i = i+2){
      while (n%i == 0){
         cout<<i<<"\t";
         n = n/i;
      }
   }
   if (n > 2)
   cout<<n<<"\t";
	
}
