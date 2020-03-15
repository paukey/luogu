#include<iostream>
using namespace std;
int n,count;


int main(){

	cin>>n;
	int sto[n];
	for(int i =0;i<n;i++)
		cin>>sto[i];

	for(int i=0;i<n;i++)
		for(int j=0;j<i;j++)
			if(sto[j]>sto[i])
				count++;

	cout<<count;
	return 0;






}
