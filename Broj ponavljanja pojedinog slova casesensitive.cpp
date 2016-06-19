#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main() {
	char U[50], red[20000], slovo;
	int k=0;
	cout<<"Datoteka:";
	cin.getline(U,50);
	ifstream tekst(U);
	if(!tekst){
		cout<<"Nepostojeæa datoteka!";
		system("pause");
		return 0;
	}
	cout<<"Slovo:";
	cin>>slovo;
	
	while(tekst.getline(red,20000)) {
		for(int i=0; i<strlen(red); i++)
			if(red[i]==slovo || red[i]==(slovo-32 )) k++;
	}
	
	cout<<k<<endl;
	system("pause");
	return 0;	
}
