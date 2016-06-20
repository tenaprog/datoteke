#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <algorithm>
using namespace std;
 
void zadatak() {
   
    string U;
    string buffer;
   
    cout << "Unesite ime datoteke: ";
    getline(cin, U);
   
    ifstream lines(U.c_str());
   
    if(lines.is_open())
    {
        ofstream nova("Odgovor.txt");
       
        while(getline(lines, buffer))
        {
            transform(buffer.begin(), buffer.end(), buffer.begin(), ::toupper);        
            nova << buffer << endl;
        }
       
        nova.clear();
        nova.close();
    }
   
    lines.clear(); 
    lines.close();
   
    string open_file = "notepad.exe Odgovor.txt";
    system(open_file.c_str());
}
 
int main() {
 
    zadatak();
   
    system("pause");
    return 0;
}
