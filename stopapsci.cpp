#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{ int dur,n,i,c,s=0,x;
cout<<"How many rounds?\n";
cin>>dur;
for(i=1;i<=dur;i++){
cout<<"\nEnter your choice - 1 : stone / 2 : paper / 3 : scissor \n";
cin>>c;
if (c==1)
cout<<"You chose stone \n";
else if (c==2)
cout<<"You chose paper \n";
else
cout<<"You chose scissor \n";
srand(time(0));
n=rand()%3+1;
if (n==1)
cout<<"System chose stone \n";
else if (n==2)
cout<<"System chose paper \n";
else if (n==3)
cout<<"System chose scissor \n";
else
cout<<"Bonus !";
if(c==1&&n==3||c==2&&n==1||c==3&&n==2)
s++;
else if (n==c)
cout<<"Draw\n";
else
cout<<"Oops\n";
}
cout<<"--------------\n";
cout<<"Your score : "<<s<<"/"<<dur; 
cin>>x;
return 0;
}
