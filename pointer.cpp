#include <iostream>
#include <cstring>

using namespace std;

typedef struct info_sepeda{
    char merk[10];
    string type;
    int tahun;
    string harga;
} spdh;

int main()
{
    spdh info={0, 0, 0, 0};
    spdh *pinfo;
    pinfo=&info;

    strcpy(pinfo->merk, "Polygon");
    pinfo->type = "Sepeda Gunung";
    pinfo->tahun = 2013;
    pinfo->harga = "2.000.000";

    cout << "Merk   : " << pinfo->merk << endl;
    cout << "Type   : " << pinfo->type << endl;
    cout << "Tahun  : " << pinfo->tahun << endl;
    cout << "Harga  : " << pinfo->harga << endl;

    return 0;
}
