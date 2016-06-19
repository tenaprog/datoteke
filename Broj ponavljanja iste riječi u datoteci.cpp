#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

int main (){
	char datoteka[50];
	cout<<"Datoteka: ";
	cin.getline(datoteka,50);
	
	ifstream ulazna (datoteka);
	
	char rijec[100000][20];
	int I=0;
	
	while(!ulazna.eof()){
		ulazna>>rijec[I];
		for (int i=0;i<strlen(rijec[I]);i++){
			rijec[I][i]=tolower(rijec[I][i]);
			I++;
		}
	}
	
	char unos[20];
	cout<<"Unos: ";
	cin.getline(unos,20);
	
	for (int i=0;i<strlen(unos);i++){
		unos[i]=tolower(unos[i]);
	} 
	int brojaci=0;
	for (int i=0;i<I;i++){
		if (strcmp (unos,rijec[i])==0) brojaci++;
	}
	
	cout<<brojaci<<endl;
	
	system ("Pause");
	return 0;
}
