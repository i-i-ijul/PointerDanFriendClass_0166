#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
private:
    string nama;

public:
    void setNama(string pNama);
    friend class siswa;
};

class siswa
{
private:
    int id;

public:
    void setId(int pTd);
    void displayAll(orang &a);
};
void orang::setNama(string pNama)
{
    nama = pNama;
}
void siswa::setId(int pTd)
{
    id = pTd;
}
void siswa::displayAll(orang &a)
{
    cout << id << endl << a.nama;
}
int main()
{
    orang joko;
    joko.setNama("joko susilo");
    siswa joko_siswa;
    joko_siswa.setId(1);
    joko_siswa.displayAll(joko);
    return 0;
}