// u binarnu i tekstualnu datoteku zapisuje se rijec i njezina duljina
#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
struct rijec{
	char r[30];
	int dulj;
	
};
int main(){
	rijec a;
	ofstream dat("Death On The Nile.txt",ios::binary | ios::app);
	ofstream dat1("izlaz.txt",ios::app);
	for(int i=0;i<3;i++){
		cin.getline(a.r,20);
		int L=strlen(a.r);
		a.dulj=L;
		dat.write((char*)&a,sizeof(a));	
		dat1<<a.r<<"  "<<L<<endl;
		
	}
	dat.close();
	dat1.close();
	
	system("pause");
	return 0;
}
