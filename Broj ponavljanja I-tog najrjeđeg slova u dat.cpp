#include <iostream>
#include <fstream>
using namespace std;
 
#define N 'Z'-'A'+1
 
struct slovo{
    char s;
    int br;
} slova[N];
 
int main() {
    string naziv;
    int I;
 
    getline(cin, naziv);
    do
        cin >> I;
    while(I<0 || I>25);
 
    ifstream dat(naziv.c_str() );
    if(dat.is_open() ) {
        for(int i=0; i<N; i++) {
            slova[i].s = 'A' + i;
            slova[i].br = 0;
        }
 
        string redak;
        while(1) {
            dat >> redak;
            if(dat.eof() ) break;
            for(int i=0; i<redak.length(); i++) {
                if(redak[i] >= 'A' && redak[i] <= 'Z')
                    slova[ redak[i]-'A' ].br++;
                else if(redak[i] >= 'a' && redak[i] <= 'z')
                    slova[ redak[i]-'a' ].br++;
            }
        }
        dat.close();
 
        for(int i=0; i<N; i++)
            for(int j=i+1; j<N; j++)
                if(slova[j].br > slova[i].br) {
                    slovo x = slova[i];
                    slova[i] = slova[j];
                    slova[j] = x;
                }
 
        cout << slova[I].s << " " << slova[I].br << endl;
    } else {
        cout << "Datoteka nije otvorena." << endl;
    }
 
    return 0;
}
