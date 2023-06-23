#include <iostream>
#include <cstring>

using namespace std;

typedef struct TBarang{
    char barcode[9];
    string nama;
    int harga;
    int jumlah;
    int subTotal(){
        return harga*jumlah;
    }
}Barang;

string padTo(string str, size_t num, char paddingChar = ' ',char position = 'L'){
    if (position=='L'){
        if(num > str.size())
            str.insert(str.size(), num - str.size(), paddingChar);
    }else if (position=='R'){
        if(num > str.size())
            str.insert(0, num - str.size(), paddingChar);
    }
    return str;
}


int main(){
    Barang b[4];
  
    strcpy(b[0].barcode,"98720343");
    b[0].nama="Produk A";
    b[0].harga=12000;
    b[0].jumlah=2;

    strcpy(b[1].barcode,"98720344");
    b[1].nama="Produk B";
    b[1].harga=15000;
    b[1].jumlah=2;

    strcpy(b[2].barcode,"98720345");
    b[2].nama="Produk C";
    b[2].harga=16000;
    b[2].jumlah=3;

    strcpy(b[3].barcode,"98720346");
    b[3].nama="Produk D";
    b[3].harga=10000;
    b[3].jumlah=1;

    cout<<"---------------------------------------------------"<<endl;
    for(int i=0;i<4;i++){
        cout<<b[i].barcode<<endl;
        cout<<"|"<<padTo(b[i].nama,10,' ','L')<<"|";
        cout<<padTo(to_string(b[i].jumlah),3,' ','R')<<"|";
        cout<<padTo(to_string(b[i].harga),8,' ','R')<<"|";
        cout<<padTo(to_string(b[i].subTotal()),10,' ','R')<<"|"<<endl;
    }
    return 0;
}
