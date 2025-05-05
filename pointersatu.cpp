#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "no induk = " << nim << endl;
    }
};

int main(){

    mahasiswa mhs; // object mahasiswa
    mhs.nim = 5;
    mhs.showNim(); //member access operator

    mahasiswa &refmhs = mhs; //pointer references refmhs
    refmhs.nim = 2; //member access operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //pointer dereferences pMhs
    pMhs->nim = 3; //arrow operator
    pMhs->showNim();
    return 0;
}