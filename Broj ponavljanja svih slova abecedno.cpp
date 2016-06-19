#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main (){
 
 int brojaci[26];
 for(int i=0; i<26; i++)
    	brojaci[i]=0;
  
  
  cout<<"Datoteka: ";
  char U[50];
  cin.getline(U, 50);
  
  ifstream ulazna(U);
  
  char *polje=new char[10000000];
  
  ulazna.getline(polje,10000000, 26);
  
  for(int i=0; i<strlen(polje); i++){
    char z=polje[i];
    z=toupper(z);
    brojaci[z-'A']++;//povecavamo brojac odreðenog znaka, ako smo dobili npr znak C, od njega oduzmemo 65 (ili 'A') onda dobijemo indeks 2 koji predstavlja indeks od brojaèa za znak C
  }
  
  int min=brojaci[0];
  int minS=0;
  for(int i=0;i<26;i++){
  	cout<<char(i+'A')<<" = "<<brojaci[i]<<endl;
  	if(brojaci[i]<min){
  		min=brojaci[i];
  		minS=i;
	  }
  }
  cout<<char(minS+'A')<<endl;
  ulazna.close();

  system("pause");
  return 0;
}
