/*
Author      : Shalvina Zahwa Aulia
NPM         : 140810180052
Kelas       : B
Tanggal     : 13 Maret 2019
Deskripsi   :
*/

#include <iostream>
using namespace std;

struct r_mhs{
    char npm[14];
    char nama[40];
    float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int& n);
void inputMhs (larikMhs& mhs, int n);
void cetakMhs (larikMhs mhs, int n);
void sortNama (larikMhs& mhs, int n);

int main(){
    int n;
    larikMhs mhs;

    banyakData(n);
    inputMhs(mhs, n);
    cetakMhs(mhs, n);
    sortNama(mhs,n);

}
void banyakData(int& n){
    cout << "Masukkan banyak data : "; cin >> n;
}
void inputMhs (larikMhs& mhs, int n){
    for (int i=0; i<n; i++){
        cout << "NPM    : "; cin >> mhs[i].npm;
        cout << "Nama   : ";
        cin.ignore();
        cin.getline(mhs[i].nama,40);
        cout << "IPK    : "; cin >> mhs[i].ipk;
    }
    cout << endl;
}
void cetakMhs (larikMhs mhs, int n){
    for (int i=0;i<n;i++){
        cout << mhs[i].npm<<endl;
        cout << mhs[i].nama<<endl;
        cout << mhs[i].ipk<<endl;
    }
    cout << endl;
}
void sortNama (larikMhs& mhs, int n){

}
