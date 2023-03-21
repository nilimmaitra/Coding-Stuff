#include<iostream>
#include<stdlib.h>
#include<time.h> 
using namespace std;int main(){int a,b,c,d,e,f,dmy; cout<<"How many rounds ?\n"; cin>>b; cout<<"How many die to roll ?\n"; cin>>f; cout<<"\nRolling, press any key\n";for(int i=1;i<=b;i++){ cin>>c; for(int j=1;j<=f;j++){d=rand()%6+1;cout<<"Rolling : "<<d<<"\t"<<endl;}}cin>>e;cin>>dmy;return 0;}

