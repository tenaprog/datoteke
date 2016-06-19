#include <iostream>
#include <fstream>
#include <cstring>
 
using namespace std;
 
int main() {
    char linija[20000];
    char imeDatoteke[40];
    cout << "Datoteka: ";
    cin.getline(imeDatoteke, 40);
   
    ifstream datoteka (imeDatoteke);
    ofstream datotekaIspis ("Nema_znakova.txt");
    if (datoteka.is_open()) {
        while (datoteka.getline(linija, 20000)) {
              int duljina = strlen(linija);
              for (int i = 0; i < duljina; i++) {
                  if (((int)linija[i] > 64 && (int)linija[i] < 91) || ((int)linija[i] > 96 && (int)linija[i] < 123) || (int)linija[i] == 32) {
                     datotekaIspis << linija[i];
                  }
              }
        }
    } else {
      cout << "Nije moguce otvoriti datoteku" << endl;      
    }
   
    datoteka.close();
    datotekaIspis.close();
   
    system("PAUSE");
    return 0;
}
