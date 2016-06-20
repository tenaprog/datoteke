#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
using namespace std;
 
void zadatak() {
   
    string U;
    string spremnik;     
   
    ifstream lines(U.c_str());
   
    if(lines.is_open())
    {
        ofstream odgovor("Odgovor.txt");
       
        while(getline(lines, spremnik))
        {
            for(int i = spremnik.length() - 1; i >= 0; i--)
            {
                odgovor << spremnik[i];
            }
            odgovor << endl;
        }
       
        odgovor.clear();
        odgovor.close();
    }
   
    lines.clear(); 
    lines.close();
   
    system("notepad.exe Odgovor.txt");
}
 
int main() {
 
    zadatak();
   
    system("pause");
    return 0;
}
