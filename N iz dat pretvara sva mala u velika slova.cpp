// ucita se ime datoteke
// ispisuje se koliko puta se svako slovo pojavljuje u datoteci
//u novu datoteku se ispisuje originalni tekst, ali su sva slova velika
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(){
	char ime[50],redak[10000];
	cout<<"Datoteka: ";
	cin.getline(ime,50);
	ifstream dat (ime);
	if(!dat)
	cout<<"takva datoteka ne postoji"<<endl;


ifstream dat1(ime);
ofstream upis ("izlaznadatoteka.txt");
	while(dat1.getline(redak,10000)){
		int L=strlen(redak);
		for(int i=0;i<L;i++){
		if(redak[i]>96 && redak[i]<123) redak[i]=redak[i]-32;
		upis<<redak[i];
	}
		upis<<endl;
}
dat1.close();
	
	system("pause");
	return 0;
}
