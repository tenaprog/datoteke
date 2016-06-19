#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int main (){
	char datoteka[50];
	cout<<"Datoteka: ";
	cin.getline(datoteka,50);
	
	ifstream ulazna (datoteka);
	
	if (!ulazna){
		cout<<"Nije ulazna.";
		return 0;
	}
	char linija[300000];
	char najduza [300000];
	while (!ulazna.eof()){
		ulazna.getline(linija,3000);
		if (strlen(linija)>strlen(najduza)){
			strcpy(najduza,linija);
		}
	}

	cout<<najduza<<endl;

	system ("Pause");
	return 0;
}
