#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main (){
	
	char U[50];
	cout<<"Datoteka: ";
	cin.getline(U,50);
	
	ifstream ulazna(U);
	ofstream izlazna;
    izlazna.open("Odgovor.txt");
	char *polje=new char[10000000];
	ulazna.getline(polje,10000000,26);
	for(int i=0;i<strlen(polje);i++){
		polje[i]=tolower(polje[i]);
		
	}
	izlazna<<polje<<endl;
	ulazna.close();
	izlazna.close();
	
	system("notepad Odgovor.txt" );
	system("pause");
	return 0;
}
