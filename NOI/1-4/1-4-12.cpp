#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	double s,t1,t2;
	cin>>s;
	t1=s/3+50;
	t2=s/1.2;
	if(t1>t2) cout<<"Walk";
	else if(t1==t2) cout<<"All";
	else cout<<"Bike";
	return 0;
} 
