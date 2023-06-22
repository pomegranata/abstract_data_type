#include <iostream>
#include <cstring>

using namespace std;

typedef struct MHS{
    char NIM[14];
    string Nama;
    string Jurusan;
    char TahunLulus[4];
}Mhs;

void padTo(std::string &str, const size_t num, const char paddingChar = ' ')
{
    if(num > str.size())
        str.insert(str.size(), num - str.size(), paddingChar);
}

int main()
{
    Mhs mhs[4];
    strcpy(mhs[0].NIM,"A11.2020.01234");
    mhs[0].Nama = "Andi";
    mhs[0].Jurusan = "Broadcasting";
    strcpy(mhs[0].TahunLulus,"2023");

    strcpy(mhs[1].NIM,"A11.2010.01234");
    mhs[1].Nama = "Budi";
    mhs[1].Jurusan = "Sistem Informasi";
    strcpy(mhs[1].TahunLulus,"2013");

    strcpy(mhs[2].NIM,"A11.2000.01234");
    mhs[2].Nama = "Ali";
    mhs[2].Jurusan = "DKV";
    strcpy(mhs[2].TahunLulus,"2003");

    strcpy(mhs[3].NIM,"A11.1990.01234");
    mhs[3].Nama = "Siti";
    mhs[3].Jurusan = "Kesehatan";
    strcpy(mhs[3].TahunLulus,"1993");

    string nim="",nama="",jurusan="",tahunlulus="";
    cout<<"---------------------------------------------------"<<endl;
    for(int i=0;i<4;i++){
        cout<<"|"<<mhs[i].NIM<<"|";
        padTo(mhs[i].Nama,10);
        cout<< mhs[i].Nama <<"|";
        padTo(mhs[i].Jurusan,18);
        cout<<(mhs[i].Jurusan)<<"|";
        cout<<mhs[i].TahunLulus<<"|"<<endl;
    }
    cout<<"---------------------------------------------------"<<endl;
    return 0;
}
