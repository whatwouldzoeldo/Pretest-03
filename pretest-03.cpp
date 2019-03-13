/*
Nama    : Muhammad Zulfikar Ali
NPM     : 140810180064
Kelas   : B
Tanggal : 13 Maret 2019
*/

#include <iostream>
using namespace std;

struct rmhs {
    char NPM[14];
    char nama[40];
    float ipk;
};

typedef rmhs larikMhs[30];
void banyakData(int& n) {
    cout<<"Masukkan banyak data : "; cin>>n;
}
void inputMhs (larikMhs& mhs, int n) {
    for (int i=0;i=n;i++) {
        cout<<"Mahasiswa ke "<<i+1<<endl;
        cout<<"Nama : ";cin>>rmhs->nama;
        cout<<"NPM  : ";cin>>rmhs->NPM;
        cout<<"IPK  : ";cin>>rmhs->ipk;
    }
}
void cetakMhs (larikMhs mhs, int n) {
        for (int i=0;i=n;i++) {
        cout<<"Mahasiswa ke "<<i+1<<endl;
        cout<<"Nama : "<<mhs.nama<<endl;
        cout<<"NPM  : "<<mhs.NPM<<endl;
        cout<<"IPK  : "<<mhs.ipk<<endl;
    }
}
void sortNama (larikMhs& mhs, int n);

int main () {
    int n;
    banyakData (n);
    inputMhs;
    cetakMhs;
}
