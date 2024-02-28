#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

const int wartosci[] = { 1000, 500, 100, 50, 10, 5, 1 };
const char nominale[] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G' };

void pokazWynik(int liczba) {
    vector<char> wynik;
    for (int i = 0; i < 7; i++) {
        while (liczba >= wartosci[i]) {
            wynik.push_back(nominale[i]);
            liczba -= wartosci[i];
        }
    }
    for (int i = 0; i < wynik.size(); i++) {
        cout << wynik[i] << " ";
    }
}

int main() {
      
      ifstream plik;
      string pracownik;
      int nagroda;

      plik.open("mafia.txt");

      while(!plik.eof()){
      plik>>pracownik>>nagroda;
      cout<<pracownik << " ";
       pokazWynik(nagroda);
       cout << endl;
      }
    return 0;
}