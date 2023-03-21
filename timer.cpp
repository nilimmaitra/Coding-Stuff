#include<iostream>
#include<conio.h>
#include<unistd.h>
using namespace std;
int main(){
	int x,i,m=0,gb;
	cout<<"Set timer for how many minutes?\n";
	cin>>x;
	for(i=1;i<=x*60;i++){
	cout<<i;
	sleep(1);
		if(i%60==0){
		cout<<endl;
		m++;
		cout<<m<<" minute(s) passed\n";
		}
		else
		cout<<" : ";
	}
	cout<<"Time is up !";
	cin>>gb;
	return 0;
}
