#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct tip {
       char slovo;
       int broj;
};

int main() {
    tip polje[26];
    char U[50];
    cout << "Datoteka: ";
    cin.getline(U,50);
    for (int i=0; i<26; i++) {
        polje[i].slovo = char(65+i);
        polje[i].broj = 0;
    }
    char linija[2000000];
    ifstream dat(U);
    while (dat.getline(linija,2000000)) {
          for (int i=0; i<strlen(linija); i++) {
              for (int j=0; j<26; j++) {
                  if (polje[j].slovo == toupper(linija[i])) polje[j].broj++;
              }
          }
    }
    
    for (int i=26-1; i>0; i--) {
        for (int j=0; j<i; j++) {
            if (polje[j].broj<polje[i].broj) {
               tip pom=polje[j];
               polje[j]=polje[i];
               polje[i]=pom;
            }
        }
    }
    
    for (int i=0; i<26; i++) {
        cout << polje[i].slovo << ": " << polje[i].broj << endl;
    }
    
    system("pause");
    return 0;    
}
