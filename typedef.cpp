#include <cmath>
#include <iostream>

using namespace std;

typedef struct PersPan {
  int pan, leb;

  int luas() { return pan * leb; }
} PP;

typedef struct Ling {
  float r;

  float luas() { return (22 / 7.0) * pow(r, 2); }
} LNG;

typedef struct Krct {
  float r, t;

  float volume() { return (1 / 3.0) * (22 / 7.0) * pow(r, 2) * t; }
} KRT;

typedef struct Bola {
  float r;

  float volume() { return (4 / 3.0) * (22 / 7.0) * pow(r, 3); }
} BL;

int main() {
  PP pp;
  pp.pan = 10;
  pp.leb = 5;
  cout << "Panjang: " << pp.pan << endl;
  cout << "Lebar: " << pp.leb << endl;
  cout << "Luas: " << pp.luas() << endl;

  LNG ling;
  ling.r = 10;
  cout << "\nJari-jari: " << ling.r << endl;
  cout << "Luas: " << ling.luas() << endl;

  KRT krt;
  krt.r = 10;
  krt.t = 5;
  cout << "\nJari-jari: " << krt.r << endl;
  cout << "Tinggi: " << krt.t << endl;
  cout << "Volume: " << krt.volume() << endl;

  BL bl;
  bl.r = 10;
  cout << "\nJari-jari: " << bl.r << endl;
  cout << "Luas: " << bl.volume() << endl;

  return 0;
}
